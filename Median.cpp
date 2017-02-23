//#include<stdio.h>
//#include<vector>
//#include<limits.h>
//#include<queue>
//#include<iostream>
//using namespace std;
//#pragma warning(disable:4996)
//queue<int> S1;
//queue<int> S2;
//int main()
//{
//	int n; cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int t; scanf("%d", &t);
//		S1.push(t);
//	}
//	S1.push(INT_MAX);
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		int t; scanf("%d", &t);
//		S2.push(t);
//	}
//	S2.push(INT_MAX);
//	int index = (S1.size() + S2.size()-3) / 2;
//	int i = 0;
//	int mid;
//	while (true)
//	{
//		if (S1.front() < S2.front())
//		{
//			mid = S1.front(); S1.pop();
//		}
//		else
//		{
//			mid = S2.front(); S2.pop();
//		}
//		if (i == index)break;
//		i++;
//	}
//	printf("%d", mid);
//	return 0;
//}