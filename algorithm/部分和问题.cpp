//#include<stdio.h>
//#include<vector>
//using namespace std;
//#pragma warning(disable:4996)
//int a[21];
//int n,k;
//vector<int> path;
//bool dfs(int LastNumIndex,int sum)
//{
//	if (LastNumIndex == n)return false;
//	if (sum == k)
//	{
//		printf("yes\n");
//		for (int i = 0; i < path.size(); i++)
//		{
//			printf("%d ", path[i]);
//		}
//		return true;
//	}
//	dfs(LastNumIndex + 1, sum);		 //转到状态 不要 LastNumIndex + 1
//	path.push_back(a[LastNumIndex+1]);   //转到状态 要   LastNumIndex + 1
//	dfs(LastNumIndex + 1, sum+a[LastNumIndex+1]);
//	path.pop_back();				//状态带来的影响回退
//}
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	scanf("%d", &k);
//	if (!dfs(-1, 0))
//	{
//		printf("no");
//	}
//	return 0;
//}