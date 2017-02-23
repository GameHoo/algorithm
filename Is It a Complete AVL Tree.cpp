//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<queue>
//#include<vector>
//using namespace std;
//struct Node
//{
//	Node* left;
//	Node* right;
//	int height;
//	int value;
//};
//Node* tree = nullptr;
//int Height(Node* t)
//{
//	if (t != nullptr)return t->height;
//	return -1;
//}
//Node* Right_Rotation(Node* t)
//{
//	Node* p = t->left;
//	t->left = p->right;
//	p->right = t;
//	t->height = max(Height(t->left), Height(t->right)) + 1;
//	//p->height = max(Height(p->left), Height(p->right)) + 1;
//	return p;
//}
//Node* Left_Rotation(Node* t)
//{
//	Node* p = t->right;
//	t->right = p->left;
//	p->left = t;
//	t->height = max(Height(t->left), Height(t->right)) + 1;
//	//p->height = max(Height(p->left), Height(p->right)) + 1;
//	return p;
//}
//Node* LR(Node* t)
//{
//	t->left = Left_Rotation(t->left);
//	return Right_Rotation(t);
//}
//Node* RL(Node* t)
//{
//	t->right = Right_Rotation(t->right);
//	return Left_Rotation(t);
//}
//Node* Insert(Node* t,int number)
//{
//	if (t == nullptr)
//	{
//		t = new Node();
//		t->value = number;
//		t->height = 0;
//	}
//	else if (number <= t->value)
//	{
//		t->left = Insert(t->left, number);
//		if (Height(t->left) - Height(t->right) == 2)
//		{
//			if (number < t->left->value)//LL
//			{
//				t = Right_Rotation(t);
//			}
//			else
//			{
//				t = LR(t);
//			}
//		}
//	}
//	else if (number > t->value)
//	{
//		t->right = Insert(t->right, number);
//		if (Height(t->right) - Height(t->left) == 2)
//		{
//			if (number > t->right->value)//RR;
//			{
//				t = Left_Rotation(t);
//			}
//			else//RL
//			{
//				t = RL(t);
//			}
//		}
//	}
//	t->height = max(Height(t->left), Height(t->right)) + 1;
//	return t;
//}
//vector<int> ans;
//void Level_Traversal(Node* t)
//{
//	queue<Node*> q;
//	q.push(t);
//	bool isComplete = true;
//	bool has_null = false;
//	while (true)
//	{
//		int len = q.size();
//		bool all_null = true;
//		while (len--)
//		{
//			if (q.front() == nullptr)
//			{
//				has_null = true;
//				q.push(nullptr);
//				q.push(nullptr);
//				q.pop();
//			}
//			else
//			{
//				ans.push_back(q.front()->value);
//				if (has_null)
//				{
//					isComplete = false;
//				}
//				all_null = false;
//				q.push(q.front()->left);
//				q.push(q.front()->right);
//				q.pop();
//			}
//		}
//		if (all_null)break;
//	}
//	for (int i = 0; i < ans.size(); i++)
//	{
//		if (i != 0)printf(" ");
//		printf("%d", ans[i]);
//	}
//	printf("\n%s", isComplete ? "YES" : "NO");
//}
//int main()
//{
//	int N;
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int number;
//		cin >> number;
//		tree=Insert(tree,number);
//	}
//	Level_Traversal(tree);
//	return 0;
//}