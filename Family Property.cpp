//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//#pragma warning(disable:4996)
//using namespace std;
//int Count[10000];
//int minID[10000];
//int estate[10000];
//int area[10000];
//int P[10000];
//bool IsRoot[10000];
//bool IsMan[10000];
//struct ans
//{
//	int ID;
//	int M;
//	double AVG_sets;
//	double AVG_area;
//};
//bool best(const ans&a, const ans&b)
//{
//	if (a.AVG_area != b.AVG_area)
//	{
//		return a.AVG_area > b.AVG_area;
//	}
//	else
//	{
//		return a.ID < b.ID;
//	}
//}
//vector<ans> anss;
//int getRoot(int a)
//{
//	return P[a] == a ? a : P[a] = getRoot(P[a]);
//}
//void unite(int a, int b)
//{
//	P[getRoot(b)] = getRoot(a);
//}
//int main()
//{
//	for (int i = 0; i < 10000; i++)
//	{
//		P[i] = i;
//		Count[i] = 1;
//		minID[i] = i;
//	}
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		int id,f,m;
//		scanf("%d%d%d", &id,&f,&m);
//		IsMan[id] = true;
//		int k;
//		scanf("%d", &k);
//		for (int i = 0; i < k; i++)
//		{
//			int child;
//			scanf("%d", &child);
//			unite(id, child);
//			IsMan[child] = true;
//		}
//		if (f != -1)
//		{
//			unite(f, id);
//			IsMan[f] = true;
//		}
//		if (m != -1)
//		{
//			unite(m, id);
//			IsMan[m] = true;
//		}
//		scanf("%d%d", &estate[id], &area[id]);
//	}
//	for (int i = 0; i < 10000; i++)
//	{
//		if (IsMan[i])
//		{
//			int root = getRoot(i);
//			IsRoot[root] = true;
//			if (root == i)continue;
//			Count[root] += Count[i];
//			estate[root] += estate[i];
//			area[root] += area[i];
//			minID[root] = minID[root] < i ? minID[root] : i;
//		}
//	}
//	for (int i = 0; i < 10000; i++)
//	{
//		if (IsRoot[i])
//		{
//			ans a_ans;
//			a_ans.ID = minID[i];
//			a_ans.M = Count[i];
//			a_ans.AVG_area = (double)area[i] / Count[i];
//			a_ans.AVG_sets = (double)estate[i] / Count[i];
//			anss.push_back(a_ans);
//		}
//	}
//	sort(anss.begin(), anss.end(), best);
//	printf(anss.size() == 0 ? "0" : "%d\n", anss.size());
//	for (int i = 0; i < (int)anss.size(); i++)
//	{
//		ans a_ans = anss[i];
//		printf("%04d %d %.3lf %.3lf", a_ans.ID, a_ans.M, a_ans.AVG_sets, a_ans.AVG_area);
//		if (i != anss.size() - 1)printf("\n");
//	}
//	return 0;
//}
