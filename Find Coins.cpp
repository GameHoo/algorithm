//#include<stdio.h>
//#include<algorithm>
//#include<limits.h>
//#pragma warning(disable:4996)
//using namespace std;
//int coins[100010];
//int main()
//{
//	int N, M; scanf("%d%d", &N, &M);
//	for (int i = 0; i < N; i++)scanf("%d", &coins[i]);
//	sort(coins, coins + N);
//	int s = 0, t = N-1, ans = coins[s]+ coins[t];
//	int min_s, min_t;
//	int max_ans = INT_MIN;
//	while (true)
//	{
//		while (t>=0 && ans>M)
//		{
//			ans = coins[s] + coins[--t];
//		}
//		if (t <= s)break;
//		if (ans > max_ans)
//		{
//			max_ans = ans;
//			min_s = s; min_t = t;
//		}
//		ans = coins[++s] + coins[t];
//	}
//	if (max_ans != M)printf("No Solution");
//	else
//	{
//		printf("%d %d", coins[min_s], coins[min_t]);
//	}
//	return 0;
//}