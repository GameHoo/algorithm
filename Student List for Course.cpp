//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<string>
//#include<cstring>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//vector<int> Course[2501];
//char student[40010][5];
//bool Student_Cmp(const int &a, const int &b)
//{
//	return strcmp(student[a], student[b])<0;
//}
//int main()
//{
//	int N, K;
//	scanf("%d%d", &N,&K);
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s", &student[i][0]);
//		int n; scanf("%d", &n);
//		for (int j = 0; j < n; j++)
//		{
//			int course_id; scanf("%d", &course_id);
//			Course[course_id].push_back(i);
//		}
//	}
//	for (int i = 1; i <=K; i++)
//	{
//		printf("%d %d\n", i, Course[i].size());
//		sort(Course[i].begin(), Course[i].end(),Student_Cmp);
//		for (int j = 0; j < Course[i].size(); j++)
//		{
//			printf("%s\n", student[Course[i][j]]);
//		}
//	}
//	return 0;
//}