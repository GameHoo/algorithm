//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<sstream>
//#include<string.h>
//#include<string>
//using namespace std;
//#pragma warning(disable:4996)
//#define DEBUG
//#ifdef DEBUG
//#define DE(X) X
//#else
//#define DE(X) ;
//#endif
//bool Is_Prime(int N)
//{
//	for (int i = 2; i*i <= N; i++)
//	{
//		if (N%i == 0)return false;
//	}
//	return N != 1;
//}
//bool Reverse(int N, int D)
//{
//	if (!Is_Prime(N))return false;
//	int ans = 0;
//	while (true)
//	{
//		ans *= D;
//		ans += N%D;
//		N /= D;
//		if (N == 0)break;
//	}
//	if (!Is_Prime(ans))return false;
//	return true;
//}
//int main()
//{
//	DE(Reverse(23,2);)
//	int N, D;
//	while (true)
//	{
//		cin >> N;
//		if (N < 0)break;
//		cin >> D;
//		if (Reverse(N, D))
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//	return 0;
//}