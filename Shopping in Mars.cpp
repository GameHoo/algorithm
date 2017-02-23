//#include<stdio.h>
//#include<vector>
//#include<limits.h>
//#pragma warning(disable:4996)
//using namespace std;
//int N, M;
//int a[100010];
//int sum[100010];
//int near_i,near_j;
//struct ans
//{
//	int i;
//	int j;
//};
//int Sum(int i, int j) 
//{
//	return sum[j] - sum[i - 1]; 
//}
//vector<ans> anss;
//int best = INT_MAX;
//int main()
//{
//	scanf("%d%d", &N, &M);
//	sum[0] = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		scanf("%d", &a[i]);
//		sum[i] +=sum[i-1]+a[i];
//	}
//	for (int i = 1; i <= N; i++)
//	{
//		int left = i; int right=N;
//		while (left<=right)
//		{
//			int mid = (left + right) / 2;
//			int D = Sum(i, mid) - M;
//			if (D>=0)
//			{
//				if (best > D)
//				{
//					anss.clear();
//					ans new_ans;
//					new_ans.i = i;
//					new_ans.j = mid;
//					anss.push_back(new_ans);
//					best = D;
//				}
//				else if(best==D)
//				{
//					ans new_ans;
//					new_ans.i = i;
//					new_ans.j = mid;
//					anss.push_back(new_ans);
//				}
//				right = mid-1;
//			}
//			else
//			{
//				left = mid+1;
//			}
//		}
//	}
//	for (int i = 0; i < anss.size(); i++)
//	{
//		printf("%d-%d\n", anss[i].i, anss[i].j);
//	}
//	return 0;
//}