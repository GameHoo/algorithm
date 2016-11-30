//#include<stdio.h>
//#include<algorithm>
//#include<limits.h>
//#include<vector>
//#include<queue>
//#include<iostream>
//#include<cstring>
//#include<string>
//using namespace std;
//#pragma warning(disable:4996)
//string N1, N2;
//long long d_N1;
//int tag, radix;
//int Char2Int(char a)
//{
//	if ('0' <= a && a <= '9')
//	{
//		return a - '0';
//	}
//	if ('a' <= a && a <= 'z')
//	{
//		return a - 'a' + 10;
//	}
//}
//int getLow(string str)
//{
//	int MAX = INT_MIN;
//	for (int i = 0; i < str.size(); i++)
//	{
//		MAX = max(MAX, Char2Int(str[i]));
//	}
//	return MAX + 1;
//}
//long long getDecimal(string str, int radix)
//{
//	long long res = 0;
//	long long base = 1;
//	for (int i = str.size() - 1; i >= 0; i--)
//	{
//		res += Char2Int(str[i])*base;
//		base *= radix;
//	}
//	return res;
//}
//int compare(int radix)
//{
//	long long base = 1;
//	long long sum = 0;
//	for (int i = N2.size() - 1; i >= 0; i--)
//	{
//		sum += base*Char2Int(N2[i]);
//		base *= radix;
//		if (sum > d_N1)return 1;
//	}
//	if (sum < 0)return 1;
//	if (sum == d_N1)return 0;
//	return -1;
//}
//long long search()
//{
//	long long low = getLow(N2);
//	long long high = max(low+1,d_N1+1);
//	long long mid;
//	while (low<=high)
//	{
//		mid = (low + high) / 2;
//		int cmp = compare(mid);
//		if (cmp==0)
//		{
//			return mid;
//		}
//		else if(cmp==-1)
//		{
//			low = mid + 1;
//		}
//		else
//		{
//			high = mid - 1;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	cin >> N1 >> N2 >> tag >> radix;
//	if (tag == 2)
//	{
//		swap(N1, N2);
//	}
//	d_N1 = getDecimal(N1, radix);
//	long long res = search();
//	if (res == -1)
//	{
//		printf("Impossible");
//	}
//	else
//	{
//		printf("%d", res);
//	}
//	printf("\n");
//	return 0;
//}