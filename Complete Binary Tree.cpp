//#include<stdio.h>
//#include<iostream>
//#include<limits.h>
//#include<queue>
//#include<string>
//#pragma warning(disable:4996)
//using namespace std;
////¥Ì¡À“ª∏ˆ
//struct node
//{
//	int left;
//	int right;
//};
//node tree[21];
//int indeg[21];
//int N;
//int root,last;
//bool isComplete(int root)
//{
//	queue<int> que;
//	que.push(root);
//	while (!que.empty())
//	{
//		bool IsAllNull = true;
//		bool FrontHaveNull = false;
//		int LevelNum = que.size();
//		while (LevelNum--)
//		{
//			int top = que.front(); que.pop();
//			if (top != -1)
//			{
//				IsAllNull = false;
//				if (FrontHaveNull)return false;
//				last = top;
//				que.push(tree[top].left);
//				que.push(tree[top].right);
//			}
//			else
//			{
//				FrontHaveNull = true;
//				que.push(-1);
//				que.push(-1);
//			}
//		}
//		if (IsAllNull)return true;
//	}
//}
//int main()
//{
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		string lefts,rights;
//		int left, right;
//		cin >> lefts >> rights;
//		if (lefts != "-")
//		{
//			sscanf(lefts.c_str(), "%d", &left);
//			tree[i].left = left;
//			indeg[left] = 1;
//		}
//		else
//		{
//			tree[i].left = -1;
//		}
//		if (rights != "-")
//		{
//			sscanf(rights.c_str(), "%d", &right);
//			tree[i].right = right;
//			indeg[right] = 1;
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
//	
//	if (isComplete(root))
//	{
//		printf("YES %d", last);
//	}
//	else
//	{
//		printf("NO %d", root);
//	}
//	return 0;
//}
//
