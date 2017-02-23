//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<vector>
//#pragma warning(disable:4996)
//using namespace std;
//struct Time
//{
//	int HH, MM, SS;
//};
//struct customer
//{
//	Time arriving_time;
//	Time Server_time;
//	int P;
//};
//struct window
//{
//	Time End_Time;
//	int customer;
//};
//bool Window_Cmp(const window&a, const window&b)
//{
//	if (a.customer == -1)return true;
//	if (b.customer == -1)return true;
//}
//vector<customer> customers;
//bool Customer_Cmp(const customer&a, const customer&b)
//{
//	if (a.arriving_time.HH > b.arriving_time.HH)return false;
//	if (a.arriving_time.HH < b.arriving_time.HH)return true;
//	if (a.arriving_time.MM > b.arriving_time.MM)return false;
//	if (a.arriving_time.MM < b.arriving_time.MM)return true;
//	if (a.arriving_time.SS > b.arriving_time.SS)return false;
//	if (a.arriving_time.SS < b.arriving_time.SS)return true;
//	return true;
//}
//window windows[101];
//int main()
//{
//	int N, K;
//	cin >> N >> K;
//	for (int i = 0; i < K; i++)
//	{
//		Time Open; Open.HH = 8; Open.MM = 0; Open.SS;
//		windows[i].End_Time = Open;
//		windows[i].customer = -1;
//	}
//	fill(windows, windows + 100, -1);
//	for (int i = 0; i < N; i++)
//	{
//		customer new_customer;
//		scanf("%d:%d:%d %d", new_customer.arriving_time.HH, new_customer.arriving_time.MM, new_customer.arriving_time.SS, new_customer.P);
//		customers.push_back(new_customer);
//	}
//	sort(customers.begin(), customers.end(), Customer_Cmp);
//	max(windows[0],windows[K], Window_Cmp);
//	return 0;
//}