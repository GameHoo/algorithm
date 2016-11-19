//#include<stdio.h>
//#include<iostream>
//using namespace std;
//#pragma warning(disable:4996)
//const int MAX_N = 50001;
//int N, K;
////真话对应多种事实 并查集的不同Union存储不同可能的事实
//class UnionFind
//{
//public:
//	UnionFind(int N)
//	{
//		father = new int[N];
//		RootFatherLevel = new int[N];
//		for (int i = 0; i < N; i++)
//		{
//			father[i] = i;
//			RootFatherLevel[i] = 1;
//		}
//	}
//	void Union(int a, int b)
//	{
//		int RootFatherA = FindRootFather(a);
//		int RootFatherB = FindRootFather(b);
//		if (RootFatherLevel[RootFatherA] == RootFatherLevel[RootFatherB])
//		{
//			father[RootFatherB] = RootFatherA;
//			RootFatherLevel[RootFatherA] += 1;
//		}
//		else
//		{
//			if (RootFatherLevel[RootFatherA] < RootFatherLevel[RootFatherB])
//			{
//				father[RootFatherA] = RootFatherB;
//			}
//			else
//			{
//				father[RootFatherB] = RootFatherA;
//			}
//		}
//	}
//	bool IsSame(int a, int b)
//	{
//		return FindRootFather(a) == FindRootFather(b);
//	}
//private:
//	int *RootFatherLevel;
//	int *father;
//	int FindRootFather(int a)
//	{
//		int rootFather = father[a];
//		while (rootFather != father[rootFather])
//		{
//			rootFather = father[rootFather];
//		}
//		return rootFather;
//	}
//};
//
//
//int main()
//{
//	scanf("%d%d", &N, &K);
//	UnionFind uf(N*3);
//	int ans = 0;
//	for (int i = 0; i < K; i++)
//	{
//		int D, X, Y;
//		scanf("%d%d%d",&D,&X,&Y);
//		X--; Y--;
//		if (X < 0 || Y < 0 || X >= N || Y >= N || (D == 2 && X == Y))
//		{
//			ans++; continue;
//		}
//		if (D == 1)
//		{
//			if (uf.IsSame(X, Y + N) || uf.IsSame(X, Y + N * 2))//所有的事实 都和是同类冲突(是AB 或者是AC)
//			{
//				ans++; 
//			}
//			else
//			{
//				uf.Union(X, Y);
//				uf.Union(X + N, Y + N);
//				uf.Union(X + N * 2, Y + N * 2);
//			}
//		}
//		if (D == 2)
//		{
//			if (uf.IsSame(X, Y) || uf.IsSame(X, Y + N * 2))//所有的事实 都和捕食关系冲突(是AA 或者是AC)
//			{
//				ans++; 
//			}
//			else
//			{
//				uf.Union(X, Y + N);
//				uf.Union(X + N, Y + N * 2);
//				uf.Union(X + N * 2, Y);
//			}
//		}
//	}
//	cout << ans;
//	return 0;
//}