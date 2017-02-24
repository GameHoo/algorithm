//#include<cstdio>
//#include<algorithm>
//#include<vector>
//using namespace std;
//#pragma warning(disable:4996)
//int N, M, S;
//struct Node
//{
//	int weight;
//	vector<int> children;
//};
//Node tree[101];
//vector<vector<int> >ans;
//vector<int> cur;
//bool child_Cmp(const int &a,const int &b)
//{
//	return tree[a].weight > tree[b].weight;
//}
//void dfs(int id,int weight)
//{
//	if (weight > S)return;
//	if (weight == S)
//	{
//		if(tree[id].children.empty())
//		ans.push_back(cur);
//		return;
//	}
//	for (int i = 0; i < tree[id].children.size(); i++)
//	{
//		int child = tree[id].children[i];
//		weight += tree[child].weight;
//		cur.push_back(tree[child].weight);
//		dfs(child, weight);
//		cur.pop_back();
//		weight -= tree[child].weight;
//	}
//}
//int main()
//{
//	scanf("%d%d%d", &N, &M, &S);
//	for (int i = 0; i < N; i++)scanf("%d", &tree[i].weight);
//	for (int i = 0; i < M; i++)
//	{
//		int ID, K; scanf("%d%d", &ID, &K);
//		for (int j = 0; j < K; j++)
//		{
//			int c; scanf("%d", &c);
//			tree[ID].children.push_back(c);
//		}
//		sort(tree[ID].children.begin(), tree[ID].children.end(), child_Cmp);
//	}
//	dfs(0,tree[0].weight);
//	for (int i = 0; i < ans.size(); i++)
//	{
//		printf("%d",tree[0].weight);
//		for (int j = 0; j < ans[i].size(); j++)
//		{
//			printf(" %d", ans[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}