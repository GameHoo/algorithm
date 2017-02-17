//#include<stdio.h>
//
//#define DD
//#ifdef DD
//#define DD(X) X
//#else
//#define DD(X) ;
//#endif
//
//int change(int n, int d) {
//	int i, j, b[100], cnt = 0;
//	while (n) {
//		b[cnt] = n%d;
//		cnt++;
//		n = n / d;
//	}
//	int ans = 0;
//	for (i = cnt - 1; i >= 0; i--) {
//		int tmp = 1;
//		for (j = 0; j<cnt - 1 - i; j++) {
//			tmp = tmp*d;
//		}
//		ans = ans + b[i] * tmp;
//	}
//	return ans;
//}
//#pragma warning(disable:4996)
//int main()
//{
//	change(23, 2);
//	return 0;
//}