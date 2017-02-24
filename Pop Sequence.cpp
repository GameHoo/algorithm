//#include<cstdio>
//#include<stack>
//#include<algorithm>
//using namespace std;
//#pragma warning(disable:4996)
//int N, M, K;
//int stack_count = 0;
//stack<int> s;
//bool Push(int num)
//{
//	if (stack_count == M)return false;
//	s.push(num);
//	stack_count++;
//	return true;
//}
//int Pop()
//{
//	int r = s.top(); s.pop();
//	stack_count--;
//	return r;
//}
//void Clear()
//{
//	while (!s.empty())
//	{
//		s.pop();
//	}
//	stack_count = 0;
//}
//int main()
//{
//	scanf("%d%d%d", &M, &N, &K);
//	for (int i = 0; i < K; i++)
//	{
//		Clear();
//		bool is_ok = true;
//		int cur_num = 1;
//		for (int i = 0; i < N; i++)
//		{
//			int a; scanf("%d", &a);
//			if (is_ok)
//			{
//				if (cur_num== a)
//				{
//					if (!Push(a))
//					{
//						is_ok = false;
//					}
//					else
//					{
//						Pop();
//						cur_num++;
//					}
//				}
//				else
//				{
//					if (!s.empty()&&s.top() == a)
//					{
//						Pop();
//					}
//					else
//					{
//						if (cur_num < a)
//						{
//							while (cur_num<=a)
//							{
//								if (Push(cur_num))
//									cur_num++;
//								else
//								{
//									is_ok = false; break;
//								}
//							}
//							Pop();
//						}
//						else
//						{
//							is_ok = false;
//						}
//					}
//				}
//			}
//			else
//			{
//
//			}
//		}
//		printf("%s\n", is_ok ? "YES" : "NO");
//	}
//	return 0;
//}