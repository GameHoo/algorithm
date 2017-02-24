//#include<cstdio>
//#include<vector>
//using namespace std;
//#pragma warning(disable:4996)
//struct Node
//{
//	Node *left, *right;
//	int val;
//};
//int N;
//int a[1010];
//Node* root = nullptr;
//bool Bulid_A_Tree(Node* &root, int left, int right)
//{
//	root = new Node();
//	root->left = nullptr; root->right = nullptr;
//	root->val = a[left];
//	if (left == right)
//	{
//		return true;
//	}
//	int cur = a[left];
//	bool left_is_greater = cur < a[left+1];
//	int mid = left+1;
//	while (true)
//	{
//		if (left_is_greater)
//		{
//			if (a[mid]>=cur)
//			{
//
//			}
//			else
//			{
//				break;
//			}
//		}
//		else
//		{
//			if (a[mid]>=cur)
//			{
//				break;
//			}
//		}
//		mid++;
//	}
//	for (int i = mid; i <= right; i++)
//	{
//		if (left_is_greater)
//		{
//			if (a[i] >= cur)return false;
//		}
//		else
//		{
//			if (a[i] < cur)return false;
//		}
//	}
//	return Bulid_A_Tree(root->left, left + 1, mid - 1) && Bulid_A_Tree(root->right, mid, right);
//}
//vector<int> ans;
//void PostOrder(Node* r)
//{
//	if (r!= nullptr)
//	{
//		PostOrder(r->left);
//		PostOrder(r->right);
//		ans.push_back(r->val);
//	}
//}
//int main()
//{
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)scanf("%d", &a[i]);
//	int left = 0, right = N - 1;
//	if (Bulid_A_Tree(root, left, right))
//	{
//		printf("YES\n");
//		PostOrder(root);
//		for (int i = 0; i < ans.size(); i++)
//		{
//			if (i != 0)printf(" ");
//			printf("%d", ans[i]);
//		}
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}