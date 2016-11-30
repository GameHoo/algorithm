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
//		int s = 0, t = 0, sum = 0;
//		int res = N + 1;
//		while (true)
//		{
//			while (t<N && sum<S)
//			{
//				sum += a[t++];
//			}
//			if (sum < S)break;
//			res = min(res, t - s);
//			sum -= a[s++];
//		}
//		if (res > N)res = 0;
//		printf("%d\n", res);
//    }
//    return 0;
//}