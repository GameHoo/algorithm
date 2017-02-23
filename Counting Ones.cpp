//#include<stdio.h>
//#include<math.h>
//#include<string>
//#include<algorithm>
//using namespace std;
//#pragma warning(disable:4996)
//int main()
//{
//	int N; scanf("%d", &N);
//	string str = to_string(N);
//	int len = str.size();
//	int left=N, right=0;
//	int M = 1;
//	int current = 0;
//	int count = 0;
//	while ((N / M) != 0)
//	{
//		current = left % 10;
//		right = N%M; 
//		left /= 10;
//		count += left*M;
//		if (current ==1)
//		{
//			count += right+1;
//		}
//		else
//		{
//			count += M;
//		}
//		M *= 10;
//	}
//	printf("%d\n", count);
//	return 0;
//}