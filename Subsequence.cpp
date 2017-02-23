//#include<stdio.h>
//#include<algorithm>
//using namespace std;
//#pragma warning(disable:4996)
//int main()
//{
//    int _N;
//    scanf("%d",&_N);
//    while(_N--)
//    {
//        int N,S;
//		int a[100000];
//		scanf("%d%d",&N,&S);
//		for (int i = 0; i < N; i++)
//		{
//			scanf("%d", &a[i]);
//		}
//		int s = 0, t = 0, sum = a[0];
//		int res = N + 1;
//		while (s<=t && t<N)
//		{
//			if (sum < S)
//			{
//				sum += a[++t];
//			}
//			else
//			{
//				if ((t - s + 1) < res)
//				{
//					res = t - s + 1;
//				}
//				sum -= a[s++];
//			}
//		}
//		if (res > N)res = 0;
//		printf("%d\n", res);
//    }
//    return 0;
//}