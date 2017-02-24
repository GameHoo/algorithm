//#include<cstdio>
//#include<vector>
//using namespace std;
//#pragma warning(disable:4996)
//vector<long long> ans;
//int Count[10010];
//int main()
//{
//	for (int i = 0; i < 10010; i++)Count[i] = 1;
//	long long N; scanf("%lld", &N);
//	printf("%lld=", N);
//	if (N == 1) { printf("1\n"); return 0; }
//	while (N>1)
//	{
//		for (long long i = 2; i <= N; i++)
//		{
//			if (N%i == 0)
//			{
//				N /= i;
//				if (ans.size()!=0 && i == ans[ans.size()-1])
//				{
//					Count[ans.size()-1]++;
//					break;
//				}
//				else
//				{
//					ans.push_back(i);
//					break;
//				}
//			}
//		}
//	}
//	for (int i = 0; i < ans.size(); i++)
//	{
//		if (i != 0)printf("*");
//		printf("%d", ans[i]);
//		if (Count[i] > 1)
//		{
//			printf("^%d", Count[i]);
//		}
//	}
//	printf("\n");
//	return 0;
//}