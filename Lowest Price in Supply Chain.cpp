//#include<stdio.h>
//#include<vector>
//#include<algorithm>
//#include<limits.h>
//#pragma warning(disable:4996)
//using namespace std;
//int N;
//double P, r;
//int Count = 0;
//int min_Count = INT_MAX;
//int Count_OF_retailer = 0;
//vector<vector<int>* > G;
//void dfs(int root=0)
//{
//	if (G[root] == nullptr)
//	{
//		if (min_Count > Count)
//		{
//			min_Count = Count;
//			Count_OF_retailer=1;
//		}
//		else if(min_Count==Count)
//		{
//			Count_OF_retailer++;
//		}
//		return;
//	}
//	for (int i = 0; i < G[root]->size();i++)
//	{
//		Count++;
//		dfs((*G[root])[i]);
//		Count--;
//	}
//}
//int main()
//{
//	scanf("%d%lf%lf", &N, &P, &r);
//	for (int i = 0; i < N; i++)
//	{
//		int k;
//		scanf("%d", &k);
//		if (k == 0) 
//		{
//			G.push_back(nullptr); 
//			continue;
//		}
//		vector<int> *child=new vector<int>;
//		for (int j = 0; j < k; j++)
//		{
//			int c;
//			scanf("%d", &c);
//			child->push_back(c);
//		}
//		G.push_back(child);
//	}
//	dfs();
//	for (int i = 0; i < min_Count; i++)
//	{
//		P *= r/100 + 1.0;
//	}
//	printf("%.4lf %d", P,Count_OF_retailer);
//	return 0;
//}
//
