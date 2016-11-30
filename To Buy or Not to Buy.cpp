//#include<stdio.h>
//#include<limits.h>
//#include<queue>
//#include<string.h>
//using namespace std;
//#pragma warning(disable:4996)
//int M, N, L, T;
//const int MAX_M = 1286;
//const int MAX_N = 128;
//const int MAX_L = 60;
//int m[MAX_N][MAX_M][MAX_L];
//bool used[MAX_N][MAX_M][MAX_L];
//int Count;
//int X[6] = { 0,0,-1,+1,0,0 };
//int Y[6] = { -1,+1,0,0,0,0 };
//int Z[6] = { 0,0,0,0,-1,+1 };
//int ans = 0;
//struct point
//{
//	point(int a, int b, int c) :x(a), y(b), z(c) {}
//	int x;
//	int y;
//	int z;
//};
//bool check(int x, int y, int z)
//{
//	if (x < 0 || y < 0 || z < 0)return false;
//	if (x >= N || y >= M || z >= L)return false;
//	if (used[x][y][z] || !m[x][y][z])return false;
//	return true;
//}
//void bfs(queue<point> &que)
//{
//	while (!que.empty())
//	{
//		point top = que.front(); que.pop();
//		Count++;
//		for (int i = 0; i < 6; i++)
//		{
//			int newX = X[i] + top.x;
//			int newY = Y[i] + top.y;
//			int newZ = Z[i] + top.z;
//			if (check(newX, newY, newZ))
//			{
//				que.push(point(newX, newY, newZ));
//				used[newX][newY][newZ] = true;
//			}
//		}
//
//	}
//}
//int main()
//{
//	scanf("%d%d%d%d", &M, &N, &L, &T);
//	for (int i = 0; i < L; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			for (int k = 0; k < N; k++)
//			{
//				scanf("%d", &m[k][j][i]);
//			}
//		}
//	}
//
//	for (int i = 0; i < L; i++)
//	{
//		for (int j = 0; j < M; j++)
//		{
//			for (int k = 0; k < N; k++)
//			{
//				if (check(k,j,i))
//				{
//					queue<point> que;
//					que.push(point(k, j, i));
//					used[k][j][i] = true;
//					Count = 0;
//					bfs(que);
//					if (Count >= T)
//					{
//						ans += Count;
//					}
//				}
//			}
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}