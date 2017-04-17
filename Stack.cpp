//#include<cstdio>
//#include<functional>
//#include<iostream>
//#include<vector>
//#include<stack>
//#include<set>
//#include<string>
//#define MAX_VAL 100010
//using namespace std;
//#pragma warning(disable:4996)
//int N;
//stack<int> s;
//int tree[MAX_VAL];
//void Update(int idx, int val)
//{
//	while (idx<=MAX_VAL)
//	{
//		tree[idx] += val;
//		idx += (idx&-idx);
//	}
//}
//int get_c(int idx)
//{
//	int sum = 0;
//	while (idx>0)
//	{
//		sum += tree[idx];
//		idx -= (idx&-idx);
//	}
//	return sum;
//}
//void Push(int num)
//{
//	s.push(num);
//	Update(num, 1);
//}
//int Pop()
//{
//	if (s.empty())return -1;
//	int top = s.top(); s.pop();
//	Update(top, -1);
//	return top;
//}
//int PeekMedian()
//{
//	if (s.empty())return -1;
//	int Rank = (1+s.size())/2;
//	int left = 0, right = MAX_VAL;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (get_c(mid)<Rank)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid-1;
//		}
//	}
//	return left;
//}
//int main()
//{
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)
//	{
//		char cmd[50]; scanf("%s", cmd);
//		if (cmd[1] == 'u')
//		{
//			int num; scanf("%d", &num);
//			Push(num);
//		}
//		else if(cmd[1]=='o')
//		{
//			int r = Pop();
//			if (r == -1)
//				printf("Invalid\n");
//			else
//				printf("%d\n", r);
//		}
//		else
//		{
//			int r = PeekMedian();
//			if (r == -1)
//				printf("Invalid\n");
//			else
//				printf("%d\n", r);
//		}
//	}
//	return 0;
//}