//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//#pragma warning(disable:4996)
//struct Node
//{
//	Node *left;
//	Node *right;
//	int height;
//	int val;
//};
//int Height(Node* t)
//{
//	return t == nullptr ? -1 : t->height;
//}
//Node * Right_Rotation(Node* t)
//{
//	Node*P = t->left;
//	t->left = P->right;
//	P->right = t;
//	t->height = max(Height(t->left), Height(t->right))+1;
//	P->height = max(Height(P->left), Height(P->right))+1;
//	return P;
//}
//Node* Left_Rotation(Node* t)
//{
//	Node*P = t->right;
//	t->right = P->left;
//	P->left = t;
//	t->height = max(Height(t->left), Height(t->right))+1;
//	P->height = max(Height(P->left), Height(P->right))+1;
//	return P;
//}
//Node* LR(Node* t)
//{
//	t->left = Left_Rotation(t->left);
//	t = Right_Rotation(t);
//	return t;
//}
//Node* RL(Node*t)
//{
//	t->right = Right_Rotation(t->right);
//	t = Left_Rotation(t);
//	return t;
//}
//Node* Insert(Node* t,int val)
//{
//	if (t == nullptr)
//	{
//		t = new Node();
//		t->val = val;
//	}
//	else
//	{
//		if (val < t->val)
//		{
//			t->left=Insert(t->left, val);
//			if (Height(t->left) - Height(t->right) == 2)
//			{
//				if (val < t->left->val)
//				{
//					t = Right_Rotation(t);
//				}
//				else
//				{
//					t = LR(t);
//				}
//			}
//		}
//		else
//		{
//			t->right = Insert(t->right, val);
//			if (Height(t->right) - Height(t->left) == 2)
//			{
//				if (val > t->right->val)
//				{
//					t = Left_Rotation(t);
//				}
//				else
//				{
//					t = RL(t);
//				}
//			}
//		}
//	}
//	t->height = max(Height(t->left), Height(t->right)) + 1;
//	return t;
//}
//Node* tree = nullptr;
//int main()
//{
//	int N; scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		int val; scanf("%d", &val);
//		tree=Insert(tree, val);
//	}
//	printf("%d", tree->val);
//	return 0;
//}