//#include<stdio.h>
//#include<algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//int favorite_color[210];
//int list[10010];
//bool flag[210];
//int dp[10010][210];
//int LCS(int X,int Y)
//{
//	if (X < 0 || Y < 0) return 0;
//	if (dp[X][Y] != -1)return dp[X][Y];
//	if (list[X] == favorite_color[Y])
//	{
//		dp[X][Y] = LCS(X - 1, Y)+1;
//		return dp[X][Y];
//	}
//	else
//	{
//		dp[X][Y] = max(LCS(X - 1, Y), LCS(X, Y - 1));
//		return dp[X][Y];
//	}
//}
//int main()
//{
//	int N; scanf("%d", &N);
//	int M; scanf("%d", &M);
//	for (int i = 0; i < M; i++)
//	{
//		scanf("%d", &favorite_color[i]);
//		flag[favorite_color[i]] = true;
//	}
//	int L; scanf("%d", &L);
//	for (int i = 0; i < L; i++)
//	{
//		scanf("%d", &list[i]);
//		if (!flag[list[i]])
//		{
//			list[i] = -1;
//		}
//	}
//	for(int x=0;x<L;x++)
//		for (int y = 0; y < M; y++)
//		{
//			dp[x][y] = -1;
//		}
//	printf("%d", LCS(L-1, M-1));
//	return 0;
//}