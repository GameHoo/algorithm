//#include<stdio.h>
//#include<algorithm>
//#include<limits.h>
//#pragma warning(disable:4996)
//using namespace std;
//int N, M, C1, C2;
//int rescue_num[500];
//int sum_rescue_num[500];
//int cost[500][500];
//int d[500];
//bool used[500];
//int num[500];
//void dijkstra()
//{
//	fill(d, d + 500, INT_MAX);
//	d[C1] = 0;
//	num[C1] = 1;
//	sum_rescue_num[C1] = rescue_num[C1];
//	while (true)
//	{
//		int u = -1;
//		for (int i = 0; i < N; i++)
//		{
//			if (!used[i] && (u == -1 || d[i] < d[u]))
//			{
//				u = i;
//			}
//		}
//		if (u == -1)break;
//		used[u] = true;
//		for (int i = 0; i < N; i++)
//		{
//			if (!used[i] && cost[u][i] != INT_MAX)
//			{
//				if (d[i] > d[u] + cost[u][i])
//				{
//					num[i] = num[u];
//					d[i] = d[u] + cost[u][i];
//					sum_rescue_num[i] = sum_rescue_num[u] + rescue_num[i];
//					continue;
//				}
//				if (d[i] == d[u] + cost[u][i])
//				{
//					num[i] += num[u];
//					if (sum_rescue_num[i] < sum_rescue_num[u] + rescue_num[i])
//					{
//						d[i] = d[u] + cost[u][i];
//						sum_rescue_num[i] = sum_rescue_num[u] + rescue_num[i];
//						continue;
//					}
//				}
//			}
//		}
//	}
//}
//int main()
//{
//	scanf("%d%d%d%d", &N, &M, &C1, &C2);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &rescue_num[i]);
//	}
//	for (int i = 0; i < 500; i++)
//	{
//		for (int j = 0; j < 500; j++)
//		{
//			cost[i][j] = INT_MAX;
//		}
//	}
//	for (int i = 0; i < M; i++)
//	{
//		int c1, c2, l;
//		scanf("%d%d%d", &c1, &c2, &l);
//		cost[c1][c2] = l;
//		cost[c2][c1] = l;
//	}
//	dijkstra();
//	printf("%d %d\n", num[C2], sum_rescue_num[C2]);
//	return 0;
//}
//
//
