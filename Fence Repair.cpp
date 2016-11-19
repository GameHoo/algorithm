//#include<cstdio>
//#include<functional>
//#include<queue>
//#include<vector>
//using namespace std;
//#pragma warning(disable:4996)
//int N;
//int main()
//{
//	long long cost;
//
//	scanf("%d", &N);
//	int number;
//	priority_queue<int, vector<int>, greater<int>> pque;
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%d", &number);
//		pque.push(number);
//	}
//	cost = 0;
//	if (pque.size() == 1)
//	{
//		cost += pque.top();
//		pque.pop();
//	}
//	while (pque.size() > 1)
//	{
//		int num1, num2;
//		num1 = pque.top(); pque.pop();
//		num2 = pque.top(); pque.pop();
//		int num = num1 + num2;
//		cost += num;
//		pque.push(num);
//	}
//	printf("%lld", cost);
//
//	return 0;
//}
