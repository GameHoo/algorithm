//#include<stdio.h>
//#include<string>
//#include<algorithm>
//#include<iostream>
//#include<limits.h>
//#include<vector>
//using namespace std;
//#pragma warning(disable:4996)
//int N, K;
//string citys[200];
//int hapiness[200];
//int sum_hapiness[200];
//int Count[200];
//int num[200];
//int cost[200][200];
//int pre[200];
//int d[200];
//bool used[200];
//vector<int> ans;
//int getIndex(string city)
//{
//	for (int i = 0; i < N; i++)
//	{
//		if (city == citys[i])return i;
//	}
//	return -1;
//}
//void dijkstra()
//{
//	fill(d, d + 200, INT_MAX);
//	Count[0] = 1;
//	d[0] = 0;
//	num[0] = 1;
//	for (int i = 0; i < N; i++)pre[i] = i;
//	while (true)
//	{
//		int u = -1;
//		for (int i = 0; i < N; i++)
//		{
//			if (!used[i] && (u == -1 || d[i] < d[u]))
//			{
//				u = i;
//			}
//		}
//		if (u == -1)break;
//		used[u] = true;
//		for (int i = 1; i < N; i++)
//		{
//			if (!used[i] && cost[u][i] != INT_MAX)
//			{
//				if (d[i] > d[u] + cost[u][i])
//				{
//					num[i] = num[u];
//					d[i] = d[u] + cost[u][i];
//					pre[i] = u;
//					Count[i] = Count[u] + 1;
//					sum_hapiness[i] = sum_hapiness[u] + hapiness[i];
//					continue;
//				}
//				if (d[i] == d[u] + cost[u][i])
//				{
//					num[i] += num[u];
//					if (sum_hapiness[i] < sum_hapiness[u] + hapiness[i])
//					{
//						d[i] = d[u] + cost[u][i];
//						pre[i] = u;
//						Count[i] = Count[u] + 1;
//						sum_hapiness[i] = sum_hapiness[u] + hapiness[i];
//						continue;
//					}
//					if (sum_hapiness[i] == sum_hapiness[u] + hapiness[i])
//					{
//						if (sum_hapiness[i] / (double)(Count[i]) < (sum_hapiness[u] + hapiness[i]) / (double)(Count[u] + 1))
//						{
//							d[i] = d[u] + cost[u][i];
//							pre[i] = u;
//							Count[i] = Count[u] + 1;
//							sum_hapiness[i] = sum_hapiness[u] + hapiness[i];
//							continue;
//						}
//					}
//				}
//			}
//		}
//	}
//	int i = getIndex("ROM");
//	ans.push_back(i);
//	while (i!=pre[i])
//	{
//		i = pre[i];
//		ans.push_back(i);
//	}
//}
//
//int main()
//{
//	scanf("%d%d", &N, &K);
//	cin >> citys[0];
//	hapiness[0] = 0;
//	for (int i = 1; i < N; i++)
//	{
//		cin >> citys[i];
//		scanf("%d", &hapiness[i]);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		for (int j = 0; j < N; j++)
//		{
//			cost[i][j] = INT_MAX;
//		}
//	}
//	for (int i = 0; i < K; i++)
//	{
//		string c1, c2;
//		cin >> c1 >> c2;
//		int ic1 = getIndex(c1);
//		int ic2 = getIndex(c2);
//		int c;
//		scanf("%d", &c);
//		cost[ic1][ic2] = c;
//		cost[ic2][ic1] = c;
//	}
//	dijkstra();
//	printf("%d %d %d %d\n",num[ans[0]],d[ans[0]],sum_hapiness[ans[0]], sum_hapiness[ans[0]]/ (Count[ans[0]]-1));
//	for (int i = ans.size() - 1; i >= 0; i--)
//	{
//		cout << citys[ans[i]];
//		if (i != 0)cout << "->";
//	}
//	cout << endl;
//	return 0;
//}

