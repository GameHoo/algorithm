//#include<stdio.h>
//#include<algorithm>
//#include<limits.h>
//#pragma warning(disable:4996)
//using namespace std;
//int N,p;
//int a[100000];
//int main()
//{
//	scanf("%d%d", &N, &p);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	sort(a, a + N);
//	int s = 0, t = 0;
//	int ans=1;
//	while (true)
//	{
//		while (t+1 < N && a[t+1]<=(long long)a[s]*p)
//		{
//			t++;
//		}
//		if (a[t]>(long long)a[s] * p)break;
//		ans = max(ans, t - s+1);
//		s++;
//	}
//	printf("%d\n", ans);
//	return 0;
//}