//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//vector<int> s;
//vector<int> e;
//int N;
//bool is_insert(vector<int> ss)
//{
//	for (int i = 1; i <= N; i++)
//	{
//		sort(ss.begin(), ss.begin() + i);
//		if (ss == e)
//		{
//			sort(ss.begin(), ss.begin() + i+1);
//			s = ss;
//			return true;
//		}
//	}
//	return false;
//}
//bool is_merge(vector<int> ss)
//{
//	bool ok = false;
//	int count = 2;
//	while (true)
//	{
//		for (int i = 0; i + count - 1 <= N; i += count)
//		{
//			sort(ss.begin()+i, ss.begin()+i+count);
//		}
//		count *= 2;
//		if (ss == e)
//		{
//			ok = true;
//			for (int i = 0; i + count - 1 <= N; i += count)
//			{
//				sort(ss.begin() + i, ss.begin() + i + count);
//				s = ss;
//			}
//			break;
//		}
//	}
//	return false;
//}
//int main()
//{
//	cin >> N;
//	for (int i = 0; i < N; i++)
//	{
//		int t;
//		cin >> t;
//		s.push_back(t);
//	}
//	for (int i = 0; i < N; i++)
//	{
//		int t;
//		cin >> t;
//		e.push_back(t);
//	}
//	if (is_insert(s))
//	{
//		printf("Insertion Sort\n");
//	}
//	else
//	{
//		is_merge(s);
//		printf("Merge Sort\n");
//	}
//	for (int i = 0; i < s.size(); i++)
//	{
//		if (i != 0)printf(" ");
//		printf("%d", s[i]);
//	}
//	return 0;
//}