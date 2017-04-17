//#include<cstdio>
//#include<vector>
//#include<functional>
//#include<algorithm>
//using namespace std;
//#pragma warning(disable:4996)
//int a[10101];
//bool choosed[10101][101];
//int dp[10101][101];//前i个物品，重量为j
//int N, M;
//
//int main()
//{
//	fill(&choosed[0][0], &choosed[0][0] + 10101 * 101, false);
//	scanf("%d%d", &N, &M);
//	for (int i = 1; i <= N; i++)scanf("%d", &a[i]);
//	sort(a + 1, a + N+1, greater<int>());
//	for (int i = 0; i <= N; i++)
//	{
//		for (int j = 0; j <= M; j++)
//		{
//			if (i == 0 || M == 0)
//			{
//				dp[i][j] = 0;
//				continue;
//			}
//			if (j >=a[i] && dp[i - 1][j] <= dp[i - 1][j - a[i]] + a[i])
//			{
//				dp[i][j] = dp[i - 1][j - a[i]] + a[i];
//				choosed[i][j] = true;
//			}
//			else
//			{
//				dp[i][j] = dp[i - 1][j];
//			}
//		}
//	}
//	bool flag = false;
//	if (dp[N][M] == M)
//	{
//		int i = N,j=M;
//		while (i>0)
//		{
//			if (choosed[i][j])
//			{
//				if (flag)printf(" ");
//				printf("%d", a[i]);
//				j = j - a[i];
//				flag = true;
//			}
//			i--;
//		}
//		printf("\n");
//	}
//	else
//	{
//		printf("No Solution\n");
//	}
//	return 0;
//}