////
//// Created by Ts on 2018/3/20.
////
//
////
//// Created by Ts on 2018/3/20.
////
//#include <stdio.h>
//int a[] = { 9,8,7,6,5,4,3,2,1,0 };
//void swap(int&a, int&b)
//{
//	int c = a;
//	a = b;
//	b = c;
//}
//void output()
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d", a[i]);
//		printf(" ");
//	}
//	printf("\n");
//}
//
//void quick_sort(int Left, int Right)
//{
//	if (Left >= Right)return;
//	int l = Left, r = Right;
//	int key = a[l];
//	while (l < r)
//	{
//		while (a[r] > key)
//		{
//			r--;
//		}
//		swap(a[l], a[r]);
//		while (a[l] < key)
//		{
//			l++;
//		}
//		swap(a[l], a[r]);
//	}
//	quick_sort(Left, l - 1);
//	quick_sort(l+1, Right);
//}
//int main()
//{
//	quick_sort(0, 9);
//	output();
//	return 0;
//}
