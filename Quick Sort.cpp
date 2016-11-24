//#include<stdio.h>
//#include<algorithm>
//#include<vector>
//#include<limits.h>
//using namespace std;
//#pragma warning(disable:4996)
//int N;
//int Left_max[100001];
//int Right_min[100001];
//int a[100001];
//int main()
//{
//	scanf("%d", &N);
//	int max = 0;
//	for (int i = 0; i < N; i++)
//	{
//		int num; scanf("%d", &num);
//		a[i] = num;
//		if (i == 0) { Left_max[i] = 0; continue; }
//		Left_max[i] = max;
//		max = std::max(max, num);
//	}
//	int min = INT_MAX;
//	for (int i = N-1; i >=0; i--)
//	{
//		int num = a[i];
//		if (i == N-1) { Right_min[i] = INT_MAX; continue; }
//		Right_min[i] = min;
//		min = std::min(min, num);
//	}
//	vector<int> ans;
//	for (int i = 0; i < N; i++)
//	{
//		if (a[i] > Left_max[i] && a[i] < Right_min[i])
//		{
//			ans.push_back(a[i]);
//		}
//	}
//	sort(ans.begin(), ans.end());
//	printf("%d\n", ans.size());
//	for (int i = 0; i < ans.size(); i++)
//	{
//		printf("%d", ans[i]);
//		if (i != ans.size() - 1)printf(" ");
//	}
//	printf("\n");
//	return 0;
//}
//
//
