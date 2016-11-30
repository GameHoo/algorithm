//#include<stdio.h>
//#include<algorithm>
//#include<limits.h>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//vector<int> G[1001];
//bool used[1001];
//int N, M, K;
//int block;
//void dfs(int s,int lost)//标记所有和s连通的顶点
//{
//	if (s == lost)//不管和lost连通的点
//	{
//		return;
//	}
//	for (int i = 0; i < G[s].size(); i++)
//	{
//		if (!used[G[s][i]])
//		{
//			used[G[s][i]] = true;
//			dfs(G[s][i],lost);
//		}
//	}
//}
//int main()
//{
//
//	scanf("%d%d%d", &N, &M, &K);
//	for (int i = 0; i < M; i++)
//	{
//		int c1, c2;
//		scanf("%d%d", &c1, &c2);
//		G[c1].push_back(c2);
//		G[c2].push_back(c1);
//	}
//	for (int i = 0; i < K; i++)
//	{
//		int c;
//		scanf("%d", &c);
//		block = 0;
//		fill(used, used + N+1, false);
//		for (int i = 1; i <= N; i++)
//		{
//			if (!used[i] && i != c)
//			{
//				used[i] = true;
//				dfs(i, c);
//				block++;
//			}
//		}
//		printf("%d\n", block - 1);
//	}
//	return 0;
//}