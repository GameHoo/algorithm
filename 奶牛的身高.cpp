//#include<stdio.h>
//#include<iostream>
//using namespace std;
//#pragma warning(disable:4996)
//struct node
//{
//	int father;
//	int rel;
//};
//node nodes[1001];
//void init()
//{
//	for (int i = 0; i < 1001; i++)
//	{
//		nodes[i].father = i;
//		nodes[i].rel = 0;
//	}
//}
//void unite(int a,int b,int rel)
//{
//	int root_father_a=a, root_father_b=b, root_father_a_rel=0, root_father_b_rel=0;
//	while (nodes[root_father_a].father!=root_father_a)
//	{
//		root_father_a_rel += nodes[root_father_a].rel;
//		root_father_a = nodes[root_father_a].father;
//	}
//	while (nodes[root_father_b].father != root_father_b)
//	{
//		root_father_b_rel += nodes[root_father_b].rel;
//		root_father_b= nodes[root_father_b].father;
//	}
//	nodes[a].father = root_father_a;
//	nodes[a].rel = root_father_a_rel;
//	nodes[b].father = root_father_b;
//	nodes[b].rel = root_father_b_rel;
//	nodes[root_father_b].father = root_father_a;
//	nodes[root_father_b].rel = root_father_a_rel - root_father_b_rel + rel;
//}
//bool isFalse(int a, int b, int rel)
//{
//	int root_father_a = a, root_father_b = b, root_father_a_rel = 0, root_father_b_rel = 0;
//	while (nodes[root_father_a].father != root_father_a)
//	{
//		root_father_a_rel += nodes[root_father_a].rel;
//		root_father_a = nodes[root_father_a].father;
//	}
//	while (nodes[root_father_b].father != root_father_b)
//	{
//		root_father_b_rel += nodes[root_father_b].rel;
//		root_father_b = nodes[root_father_b].father;
//	}
//	if (root_father_a == root_father_b)
//	{
//		if (root_father_b_rel - root_father_a_rel == rel)
//		{
//			return false;
//		}
//		return true;
//	}
//	else
//	{
//		return false;
//	}
//}
//int main()
//{
//	int W;
//	scanf("%d", &W);
//	for (int i = 0; i < W; i++)
//	{
//		int n, m;
//		scanf("%d%d", &n, &m);
//		init();
//		bool ok = true;
//		for (int i = 0; i < m; i++)
//		{
//			int s, t, v;
//			scanf("%d%d%d", &s, &t, &v);
//			if (s<0 || s<0 || s>n || t>n)
//			{
//				ok = false;
//				continue;
//			}
//			if (!isFalse(s, t, v))
//			{
//				unite(s, t, v);
//			}
//			else
//			{
//				ok = false;
//				continue;
//			}
//		}
//		if (ok)
//		{
//			printf("Bessie's eyes are good\n");
//		}
//		else
//		{
//			printf("Bessie is blind.\n");
//		}
//
//	}
//	
//	
//	
//
//	return 0;
//}
