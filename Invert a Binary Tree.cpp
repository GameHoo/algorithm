//#include<stdio.h>
//#include<queue>
//#pragma warning(disable:4996)
//using namespace std;
//struct node
//{
//	int left;
//	int right;
//};
//node tree[11];
//int root;
//int indeg[11];
//int N;
//void LeverOrder(int root, int N)
//{
//	queue<int> que;
//	que.push(root);
//	while (!que.empty())
//	{
//		int len = que.size();
//		while (len--)
//		{
//			int front = que.front(); que.pop();
//			printf("%d", front); N--;
//			if (N != 0)printf(" ");
//			if (tree[front].right != -1)
//				que.push(tree[front].right);
//			if (tree[front].left != -1)
//				que.push(tree[front].left);
//		}
//	}
//}
//void InOrder(int root)
//{
//	if (root == -1)return;
//	InOrder(tree[root].right);
//	printf("%d", root); N--;
//	if (N != 0)printf(" ");
//	InOrder(tree[root].left);
//}
//int main()
//{
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		char str[3];
//		scanf("%s", str);
//		if (str[0] != '-')
//		{
//			int num;
//			sscanf(str, "%d", &num);
//			tree[i].left = num;
//			indeg[num] = 1;
//		}
//		else
//		{
//			tree[i].left = -1;
//		}
//		scanf("%s", str);
//		if (str[0] != '-')
//		{
//			int num;
//			sscanf(str, "%d", &num);
//			tree[i].right = num;
//			indeg[num] = 1;
//		}
//		else
//		{
//			tree[i].right = -1;
//		}
//	}
//	for (int i = 0; i < N; i++)
//	{
//		if (indeg[i] == 0)
//		{
//			root = i; break;
//		}
//	}
//	LeverOrder(root,N);
//	printf("\n");
//	InOrder(root);
//	return 0;
//}
//
//
