//#include<stdio.h>
//#pragma warning(disable:4996)
////二分法搜索 第一个 大于不等于 x 的数字的下标
//int a[1000] = { 1,2,3,4,5,6 };
//int N;
//float x=2;
//int BS()
//{
//	int left = 0; int right = N;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] <= x)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	return left;
//}
//int main()
//{
//
//	for (N = 0; N < 1000; N++)
//	{
//		if (a[N] == 0)
//		{
//			break;
//		}
//	}
//	printf("第一个大于不等于%f的是%d",x,a[BS()]);
//	return 0;
//}