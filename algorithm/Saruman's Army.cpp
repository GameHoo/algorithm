//#include<stdio.h>
//#pragma warning(disable:4996)
//#include<algorithm>
//using namespace std;
//int main()
//{
//	bool isfirst = true;
//	while (true)
//	{
//		int R, N;
//		int p[1000];
//		scanf("%d%d", &R, &N);
//		if (R == N && N == -1)
//		{
//			return 0;
//		}
//		for (int i = 0; i < N; i++)
//		{
//			scanf("%d", &p[i]);
//		}
//		sort(p, p + N);
//		int start = 0;
//		int count = 0;
//		int farest = 0;
//		while (true)
//		{
//			for (int i = start; i < N; i++)
//			{
//				if (p[i] - p[start] <= R)
//				{
//					farest = i;
//				}
//			}
//			if (farest == N - 1)
//			{
//				count++;
//				break;
//			}
//			count++;
//			start = farest;
//			for (int i = start; i < N; i++)
//			{
//				if (p[i] - p[start] <= R)
//				{
//					farest = i;
//				}
//			}
//			if (farest == N - 1)
//			{
//				break;
//			}
//			start = farest + 1;
//		}
//		static bool first = true;
//		if (!first)
//		{
//			printf("\n");
//		}
//		else
//		{
//			first = false;
//		}
//		printf("%d", count);
//	}
//	return 0;
//}