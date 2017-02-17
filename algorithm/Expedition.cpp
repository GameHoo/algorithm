#include<stdio.h>
#pragma warning(disable:4996)
#include<queue>
#include<vector>
#include<iostream>
using namespace std;
int dis[10001], fuel[10001];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int dis, fuel;
		cin >> dis >> fuel;
		::dis[i] = dis;
		::fuel[i] = fuel;
	}
	cin >> dis[n + 1];
	cin >> fuel[n + 1];
	int ans = 0, pos = dis[n+1], tank = fuel[n + 1];
	int d = pos;//需要走的距离
	
	return 0;
}