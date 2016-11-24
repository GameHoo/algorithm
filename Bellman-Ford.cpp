//#include<stdio.h>
//#include<cstring>
//#include<algorithm>
//#include<limits>
//#pragma warning(disable:4996)
//using namespace std;
//int N, M;
//numeric_limits<int> int_limit;
//int d[101];
//int s[10001];
//int t[10001];
//int c[10001];
//int main()
//{
//	while (true)
//	{
//		fill(d, d + 101, int_limit.max());
//		d[1] = 0;
//		scanf("%d%d", &N, &M);
//		if (N == 0 && M == 0) break;
//		for (int i = 0; i < M; i++)
//		{
//			int S, T, C;
//			scanf("%d%d%d", &S, &T, &C);
//			s[i] = S;
//			t[i] = T;
//			c[i] = C;
//		}
//		bool update = true;
//		while (update)
//		{
//			update = false;
//			for (int i = 0; i < M; i++)
//			{
//				if ((d[s[i]]!=int_limit.max()) && (d[t[i]] > d[s[i]] + c[i]))
//				{
//					d[t[i]] = d[s[i]] + c[i];
//					update = true;
//				}
//			}
//		}
//		printf("%d\n", d[N]);
//	}
//
//
//	return 0;
//}
//
