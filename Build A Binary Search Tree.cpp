//#include<stdio.h>
//#include<algorithm>
//#include<queue>
//using namespace std;
//#pragma warning(disable:4996)
//struct Node
//{
//	int left;
//	int right;
//	int value;
//};
//int N;
//Node tree[101];
//int index = 0;
//int a[101];
//bool IsRoot[101];
//vector<int> ans;
//void InOrder(int root)
//{
//	if (root == -1)return;
//	InOrder(tree[root].left);
//	tree[root].value = a[index++];
//	InOrder(tree[root].right);
//}
//void LevelOrder(int root)
//{
//	queue<int> que;
//	que.push(root);
//	while (!que.empty())
//	{
//		int len = que.size();
//		bool end = true;
//		while (len--)
//		{
//			int top = que.front(); que.pop();
//			if (top != -1)
//			{
//				end = false;
//				ans.push_back(tree[top].value);
//				que.push(tree[top].left);
//				que.push(tree[top].right);
//			}
//		}
//		if (end == true)break;
//	}
//}
//int main()
//{
//	scanf("%d", &N);
//	fill(IsRoot, IsRoot + 101, true);
//	for (int i = 0; i < N; i++)
//	{
//		int left, right;
//		scanf("%d%d", &left, &right);
//		tree[i].left = left;
//		tree[i].right = right;
//		if (left != -1)
//		{
//			IsRoot[left] = false;
//		}
//		if (right != -1)
//		{
//			IsRoot[right] = false;
//		}
//	}
//	int root;
//	for (int i = 0; i < N; i++)
//	{
//		if (IsRoot[i] == true)
//		{
//			root = i;
//			break;
//		}
//	}
//	for(int i=0;i<N;i++)scanf("%d", &a[i]);
//	sort(a, a + N);
//	InOrder(root);
//	LevelOrder(root);
//	for (int i = 0; i < ans.size(); i++)
//	{
//		printf("%d", ans[i]);
//		if (i != ans.size() - 1)
//		{
//			printf(" ");
//		}
//	}
//	printf("\n");
//	return 0;
//}
//
//
