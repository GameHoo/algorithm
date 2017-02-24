//#include<cstdio>
//using namespace std;
//#pragma warning(disable:4996)
//int N, M;
//int Count=0;
//int ans = -1;
//int main()
//{
//	scanf("%d%d", &N, &M);
//	for (int i = 0; i < N*M; i++)
//	{
//		int num; scanf("%d", &num);
//		if (ans != num)
//		{
//			if (Count == 0)
//			{
//				ans = num;
//				Count = 1;
//			}
//			else if (Count >= 1)
//			{
//				Count--;
//			}
//		}
//		else
//		{
//			Count++;
//		}
//	}
//	printf("%d", ans);
//	return 0;
//}