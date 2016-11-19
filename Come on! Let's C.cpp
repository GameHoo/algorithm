//#include<stdio.h>
//#include<iostream>
//#include<string>
//#include<map>
//#pragma warning(disable:4996)
//using namespace std;
////¥Ì¡À“ª∏ˆ
//bool is_prime(int num)
//{
//	for (int i = 2; i*i < num; i++)
//	{
//		if (num%i == 0)return false;
//	}
//	return num != 1;
//}
//int main()
//{
//	int N, K;
//	map<string, string> award;
//	scanf("%d", &N);
//	for (int i = 1; i <= N; i++)
//	{
//		string id;
//		cin >> id;
//		if (i == 1)
//		{
//			award.insert(pair<string, string>(id, "Mystery Award"));
//			continue;
//		}
//		if (is_prime(i))
//		{
//			award.insert(pair<string, string>(id, "Minion"));
//		}
//		else
//		{
//			award.insert(pair<string, string>(id, "Chocolate"));
//		}
//	}
//	scanf("%d", &K);
//	for (int i = 0; i < K; i++)
//	{
//		string id;
//		cin >> id;
//		auto search = award.find(id);
//		if (search != award.end())
//		{
//			printf("%s: %s",id.c_str(),search->second.c_str());
//			search->second = "Checked";
//		}
//		else
//		{
//			printf("%s: Are you kidding?",id.c_str());
//		}
//		printf("\n");
//	}
//	return 0;
//}
//
