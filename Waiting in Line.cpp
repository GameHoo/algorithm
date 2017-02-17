//#include<stdio.h>
//#include<limits.h>
//#include<iostream>
//#include<queue>
//#include<deque>
//#include<vector>
//#include<string>
//#define DeBug
//#ifdef DeBug
//#define DD(X) X
//#else
//#define DD(X) ;
//#endif
//using namespace std;
//#pragma warning(disable:4996)
//struct Window
//{
//	int End_Time;
//	queue<int> que;
//};
//Window Windows[20];
//int Processing_Time[1001];
//int End_Time[1001];
//string Get_Time(int index)
//{
//	if ( End_Time[index]-Processing_Time[index]>= 9 * 60)return "Sorry";
//	int hours = 8;
//	int minutes = 0;
//	hours = (End_Time[index] + 8 * 60) / 60;
//	minutes = (End_Time[index] + 8 * 60) % 60;
//	char ans[10];
//	sprintf(ans, "%02d:%02d", hours, minutes);
//	return ans;
//}
//int main()
//{
//	int N, M, K, Q;
//	cin >> N >> M >> K >> Q;
//	for (int i = 0; i < K; i++)
//	{
//		scanf("%d", &Processing_Time[i]);
//	}
//	for (int i = 0; i < N*M && i < K; i++)
//	{
//		Windows[i%N].que.push(i);
//		if (!(i / N))
//		{
//			Windows[i%N].End_Time= Processing_Time[i];
//			End_Time[i] = Processing_Time[i];
//			DD(cout << "第" << i << "人放入" << i%N << "号队列 结束时间：" << End_Time[i] << endl;)
//		}
//		else
//		{
//			End_Time[i] = Windows[i%N].End_Time+Processing_Time[i];
//			Windows[i%N].End_Time = End_Time[i];
//			DD(cout << "第" << i << "人放入" << i%N << "号队列 结束时间：" << End_Time[i] << endl;)
//		}
//	}
//	for (int i = N*M; i < K; i++)
//	{
//		int fast = -1;
//		int min = INT_MAX;
//		for (int j = 0; j < N; j++)
//		{
//			if (End_Time[Windows[j].que.front()] < min)
//			{
//				min = End_Time[Windows[j].que.front()];
//				fast = j;
//			}
//		}
//		Windows[fast].que.push(i);
//		Windows[fast].que.pop();
//		Windows[fast].End_Time += Processing_Time[i];
//		End_Time[i] = Windows[fast].End_Time;
//		DD(cout << "第" << i << "人放入" << fast << "号队列 结束时间：" << End_Time[i] << endl;)
//	}
//	for (int i = 0; i < Q; i++)
//	{
//		int index;
//		scanf("%d", &index);
//		printf("%s", Get_Time(index-1).c_str());
//		if (i != Q - 1)printf("\n");
//	}
//	return 0;
//}