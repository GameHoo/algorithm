//#include<stdio.h>
//#include<algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//int *a;
//int iabs(int a)
//{
//	return a < 0 ? -a : a;
//}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	a = new int[N];
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	sort(a, a + N);
//	int n1, n2;//n1<=n2
//	if (N % 2 == 0)
//	{
//		n1 = n2 = N / 2;
//	}
//	else
//	{
//		n1 = n2 = N / 2;
//		n2++;
//	}
//	int s1 = 0, s2 = 0;
//	for (int i = 0; i < N; i++)
//	{
//		if (i < n1)
//		{
//			s1 += a[i];
//		}
//		else
//		{
//			s2 += a[i];
//		}
//	}
//	printf("%d %d", iabs(n1 - n2), iabs(s1 - s2));
//	return 0;
//}
//
