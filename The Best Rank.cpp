//#include<stdio.h>
//#include<string>
//#include<map>
//#include<vector>
//#include<functional>
//#include<iostream>
//#include<algorithm>
//#include<limits.h>
//#pragma warning(disable:4996)
//using namespace std;
//struct student
//{
//	student(string a, int b, int c, int d,int e) :id(a), C(b), M(c), E(d) ,AVG(e){}
//	string id;
//	int C;
//	int M;
//	int E;
//	int AVG;
//};
//vector<student> stus;
//int G_C[2000];
//int G_M[2000];
//int G_E[2000];
//int G_AVG[2000];
//map<int, int> G_Rank_C;
//map<int, int> G_Rank_M;
//map<int, int> G_Rank_E;
//map<int, int> G_Rank_AVG;
//int main()
//{
//	int N, M;
//	scanf("%d%d", &N, &M);
//	for (int i = 0; i < N; i++)
//	{
//		string id;
//		int C, M, E;
//		cin >> id >> C >> M >> E;
//		G_C[i] = C; G_M[i] = M; G_E[i] = E;
//		G_AVG[i] = (C + M + E) / 3;
//		stus.push_back(student(id, C, M, E, (C + M + E) / 3));
//	}
//	sort(G_C, G_C + N,greater<int>());
//	sort(G_M, G_M + N, greater<int>());
//	sort(G_E, G_E + N, greater<int>());
//	sort(G_AVG, G_AVG + N, greater<int>());
//	int rank_C = 1;
//	int rank_M = 1;
//	int rank_E = 1;
//	int rank_AVG = 1;
//	for (int i = 0; i < N; i++)
//	{
//		if (i == 0)
//		{
//			G_Rank_C.insert(pair<int, int>(G_C[i], rank_C));
//			G_Rank_M.insert(pair<int, int>(G_M[i], rank_M));
//			G_Rank_E.insert(pair<int, int>(G_E[i], rank_E));
//			G_Rank_AVG.insert(pair<int, int>(G_AVG[i], rank_AVG));
//			continue;
//		}
//		if (G_C[i] != G_C[i - 1])
//		{
//			G_Rank_C.insert(pair<int, int>(G_C[i], ++rank_C));
//		}
//		else
//		{
//			rank_C++;
//		}
//		if (G_M[i] != G_M[i - 1])
//		{
//			G_Rank_M.insert(pair<int, int>(G_M[i], ++rank_M));
//		}
//		else
//		{
//			rank_M++;
//		}
//		if (G_E[i] != G_E[i - 1])
//		{
//			G_Rank_E.insert(pair<int, int>(G_E[i], ++rank_E));
//		}
//		else
//		{
//			rank_E++;
//		}
//		if (G_AVG[i] != G_AVG[i - 1])
//		{
//			G_Rank_AVG.insert(pair<int, int>(G_AVG[i], ++rank_AVG));
//		}
//		else
//		{
//			rank_AVG++;
//		}
//	}
//	for (int i = 0; i < M; i++)
//	{
//		string id;
//		cin >> id;
//		char ans[10] = "N/A\n";
//		char str[] = { 'A','C','M','E' };
//		for (int i = 0; i < stus.size(); i++)
//		{
//			if (id == stus[i].id)
//			{
//				int rank[4];
//				rank[0] = G_Rank_AVG[stus[i].AVG];
//				rank[1] = G_Rank_C[stus[i].C];
//				rank[2] = G_Rank_M[stus[i].M];
//				rank[3] = G_Rank_E[stus[i].E];
//				int best_rank = INT_MAX;
//				int best_rank_index = -1;
//				for (int i = 0; i < 4; i++)
//				{
//					if (rank[i] < best_rank)
//					{
//						best_rank = rank[i];
//						best_rank_index = i;
//					}
//				}
//				sprintf(ans, "%d %c\n", best_rank, str[best_rank_index]);
//				break;
//			}
//		}
//		printf("%s", ans);
//	}
//	return 0;
//}