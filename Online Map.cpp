//#include<stdio.h>
//#include<limits.h>
//#include<vector>
//#include<queue>
//#include<algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//int N, M, S, T;
//const int MAX_N = 510;
//const int INF = INT_MAX;
//int Length[MAX_N][MAX_N];
//int Time[MAX_N][MAX_N];
//vector<int> SPath;
//vector<int> FPath;
//int ansDis=0, ansTim=0;
//struct PointInfo
//{
//	PointInfo(int a, int b)
//	{
//		point = a;
//		cost = b;
//	}
//	int point;
//	int cost;
//};
//class cmp
//{
//public:
//	bool operator()(const PointInfo &a, const PointInfo &b)
//	{
//		return a.cost > b.cost;
//	}
//};
//
//void getShortest()
//{
//	priority_queue<PointInfo, vector<PointInfo>, cmp> unused;
//	int *pre=new int[N];
//	int *l = new int[N];
//	int *t = new int[N];
//	for (int i = 0; i < N; i++)
//	{
//		pre[i] = i;
//		l[i] = INF;
//		t[i] = INF;
//	}
//	l[S] = 0;
//	t[S] = 0;
//	unused.push(PointInfo(S, 0));
//	while (!unused.empty())
//	{
//		PointInfo top = unused.top(); unused.pop();
//		if (top.cost > l[top.point])continue;//需要丢弃的过期数据
//		int u = top.point;
//		for (int i = 0; i < N; i++)
//		{
//			if (Length[u][i] != INF && l[i] > l[u] + Length[top.point][i])
//			{
//				l[i] = l[u] + Length[u][i];
//				t[i] = t[u] + Time[u][i];
//				pre[i] = u;
//				unused.push(PointInfo(i, l[i])); continue;
//			}
//			if(Length[top.point][i] != INF && l[i] == top.cost + Length[top.point][i])
//			{
//				if (t[i] > t[top.point] + Time[top.point][i])
//				{
//					l[i] = l[u] + Length[u][i];
//					t[i] = t[u] + Time[u][i];
//					pre[i] = u;
//					unused.push(PointInfo(i, l[i]));
//				}
//			}
//		}
//	}
//	int i =T;
//	SPath.push_back(i);
//	while (i!=S)
//	{
//		ansDis += Length[pre[i]][i];
//		i = pre[i];
//		SPath.push_back(i);
//	}
//}
//void getFastest()
//{
//	priority_queue<PointInfo, vector<PointInfo>, cmp> unused;
//	int *pre = new int[N];
//	int *count = new int[N];
//	int *t = new int[N];
//	for (int i = 0; i < N; i++)
//	{
//		pre[i] = i;
//		count[i] = 0;
//		t[i] = INF;
//	}
//	t[S] = 0;
//	unused.push(PointInfo(S, 0));
//	while (true)
//	{
//		if (unused.empty())break;
//		PointInfo top = unused.top(); unused.pop();
//		if (top.cost > t[top.point])continue;//需要丢弃的过期数据
//		int u = top.point;
//		for (int i = 0; i < N; i++)
//		{
//			if (Time[u][i] != INF && t[i] > t[u] + Time[u][i])
//			{
//				count[i] = count[u] + 1;
//				t[i] = t[u] + Time[u][i];
//				pre[i] = u;
//				unused.push(PointInfo(i, t[i])); continue;
//			}
//			if (Time[u][i] != INF && t[i] == t[u] + Time[u][i])
//			{
//				if (count[i] > count[u] + 1)
//				{
//					count[i] = count[u] + 1;
//					t[i] = t[u] + Time[u][i];
//					pre[i] = u;
//					unused.push(PointInfo(i, t[i]));
//				}
//			}
//		}
//	}
//	int i = T;
//	FPath.push_back(i);
//	while (i != S)
//	{
//		ansTim += Time[pre[i]][i];
//		i = pre[i];
//		FPath.push_back(i);
//	}
//}
//int main()
//{
//	scanf("%d%d", &N, &M);
//	for(int i=0;i<N;i++)
//		for (int j = 0; j < N; j++)
//		{
//			Length[i][j] = INF;
//			Time[i][j] = INF;
//		}
//	for (int i = 0; i < M; i++)
//	{
//		int V1, V2, One_Way, length, time;
//		scanf("%d%d%d%d%d", &V1, &V2, &One_Way,&length,&time);
//		Length[V1][V2] = length;
//		Time[V1][V2] = time;
//		if (!One_Way)
//		{
//			Length[V2][V1] = length;
//			Time[V2][V1] = time;
//		}
//	}
//	scanf("%d%d", &S, &T);
//	getShortest();
//	getFastest();
//	if (SPath == FPath)
//	{
//		printf("Distance = %d; Time = %d: ",ansDis,ansTim);
//		for (int i = SPath.size() - 1; i >= 0; i--)
//		{
//			printf("%d", SPath[i]);
//			if (i != 0)printf(" -> ");
//		}
//	}
//	else
//	{
//		printf("Distance = %d: ", ansDis);
//		for (int i = SPath.size() - 1; i >= 0; i--)
//		{
//			printf("%d", SPath[i]);
//			if (i != 0)printf(" -> ");
//		}
//		printf("\n");
//		printf("Time = %d: ", ansTim);
//		for (int i = FPath.size() - 1; i >= 0; i--)
//		{
//			printf("%d", FPath[i]);
//			if (i != 0)printf(" -> ");
//		}
//	}
//	return 0;
//}
//
