//#include<stdio.h>
//#include<iostream>
//using namespace std;
//#pragma warning(disable:4996)
//int p[150010];
//
//int find(int x) { return p[x] == x ? x : find(p[x]); }
//
//bool same(int x, int y) { return find(x) == find(y); }
//
//void unite(int x, int y)
//{
//	int u = find(x);
//	int v = find(y);
//    p[u] = v;
//}
//
//int main()
//{
//	for (int i = 0; i < 100; i++)p[i] = i;
//	unite(1, 2);
//	unite(2, 4);
//	cout << same(1, 4);
//	return 0;
//}
