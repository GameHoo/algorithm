//#include<stdio.h>
//#include<algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//int P[10010];
//bool BirdShowed[10010];
////带优化的并查集 AC
//int getRoot(int a)
//{
//	return P[a] == a ? a : P[a]=getRoot(P[a]);
//}
//void Union(int a, int b)
//{
//	P[getRoot(b)] = getRoot(a);
//}
//bool IsSame(int a, int b)
//{
//	return getRoot(a) == getRoot(b);
//}
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int i = 1; i <= 10010; i++)
//	{
//		P[i] = i;
//	}
//	fill(BirdShowed, BirdShowed + 10010, false);
//	int SetNum = N;
//	int BirdNum = 0;
//	for (int i = 0; i < N; i++)
//	{
//		int K;
//		scanf("%d", &K);
//		int lastNum = -1;
//		for (int j = 0; j < K; j++)
//		{
//			int num;
//			scanf("%d", &num);
//			if (BirdShowed[num] == false)
//			{
//				BirdNum++; BirdShowed[num] = true;
//				if(lastNum!=-1)
//				Union(lastNum, num);
//			}
//			else
//			{
//				if (lastNum == -1)
//				{
//					SetNum--; 
//				}
//				else if(!IsSame(lastNum,num))
//				{
//					SetNum--;
//					Union(lastNum, num);
//				}
//			}
//			lastNum = num;
//		}
//	}
//	printf("%d %d\n", SetNum, BirdNum);
//	int t;
//	scanf("%d", &t);
//	for (int i = 0; i < t; i++)
//	{
//		int a, b;
//		scanf("%d%d", &a, &b);
//		if (IsSame(a, b))
//		{
//			printf("Yes\n");
//		}
//		else
//		{
//			printf("No\n");
//		}
//	}
//	
//	return 0;
//}
//
