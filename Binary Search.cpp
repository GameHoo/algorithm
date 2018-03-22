#include<stdio.h>
int a[] = { 0,3,5,7,10,15,16,57,58,99 };
int binary_search(int value, int l, int r)
{
	int mid = (l + r) / 2;
	while (l < r)
	{
		if (a[mid] == value)return mid;
		if (value < a[mid])
		{
			r = mid - 1;
		}
		else
		{
			l = mid + 1;
		}
		mid = (l + r) / 2;
	}
	return value == a[mid] ? mid : -1;
}
int main()
{
	printf("%d\n", binary_search(15, 0, 9));
	return 0;
}