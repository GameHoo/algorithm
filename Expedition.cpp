//#include<stdio.h>
//#pragma warning(disable:4996)
//#include<queue>
//#include<vector>
//#include<iostream>
//const int MAX_N = 10000;
//using namespace std;
//int dis, fuel;
//int n;
//struct step
//{
//	int dis;
//	int fuel;
//};
//step steps[MAX_N];
//bool l(const step &  a, const step &  b)
//{
//	return a.dis > b.dis;
//}
//
//int main()
//{
//	cin >> n;
//	priority_queue<int> pque;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> steps[i].dis >> steps[i].fuel;
//	}
//	sort(steps, steps+n, l);
//	cin >> dis >> fuel;
//	int ans = 0;
//	dis = dis - fuel;
//	fuel = 0;
//	//重复选择 直到结束
//	while (dis>0)
//	{
//		//先把能到达的step全放进优先队列
//		static int i = 0;
//		while (steps[i].dis>=dis)
//		{
//			pque.push(steps[i].fuel);
//			i++;
//		}
//		//没有step了
//		if (pque.empty())
//		{
//			ans = -1; break;
//		}
//		ans++;
//		int stepFuel = pque.top(); pque.pop();
//		fuel += stepFuel;
//		dis -= fuel;
//		fuel = 0;
//	}
//	cout << ans;
//	return 0;
//}