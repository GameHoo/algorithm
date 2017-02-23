//#include<stdio.h>
//#include<iostream>
//#include<algorithm>
//#include<string>
//#pragma warning(disable:4996)
//int rate[24];
//#include<vector>
//#include<map>
//using namespace std;
//struct Time
//{
//	int MOU, DAY, HOU, MIN;
//};
//struct record
//{
//	string name;
//	Time time;
//	string state;
//};
//vector<record> records;
//bool records_cmp(const record &a, const record &b)
//{
//	if (a.name > b.name)return false;
//	if (a.name < b.name)return true;
//	if (a.time.MOU > b.time.MOU)return false;
//	if (a.time.MOU < b.time.MOU)return true;
//	if (a.time.DAY > b.time.DAY)return false;
//	if (a.time.DAY < b.time.DAY)return true;
//	if (a.time.HOU > b.time.HOU)return false;
//	if (a.time.HOU < b.time.HOU)return true;
//	if (a.time.MIN > b.time.MIN)return false;
//	if (a.time.MIN < b.time.MIN)return true;
//	return true;
//}
//float calculate(Time s,Time t)
//{
//	float total=0;
//	int lasting_time = 0;
//	Time temp = s;
//	while (true)
//	{
//		if (s.DAY==t.DAY && s.HOU==t.HOU &&s.MIN==t.MIN)break;
//		lasting_time++;
//		total += rate[s.HOU];
//		if (s.MIN == 59)
//		{
//			s.MIN = 0;
//			if (s.HOU == 23)
//			{
//				s.HOU = 0;
//				s.DAY++;
//			}
//			else
//			{
//				s.HOU++;
//			}
//		}
//		else
//		{
//			s.MIN++;
//		}
//	}
//	total /= 100;
//	printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n", temp.DAY, temp.HOU, temp.MIN, t.DAY, t.HOU, t.MIN, lasting_time,total);
//	return total;
//}
//int main()
//{
//	for (int i = 0; i < 24; i++)scanf("%d", &rate[i]);
//	int n; scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		record New_Record;
//		cin >> New_Record.name;
//		scanf("%d:%d:%d:%d", &New_Record.time.MOU, &New_Record.time.DAY, &New_Record.time.HOU, &New_Record.time.MIN);
//		cin >> New_Record.state;
//		records.push_back(New_Record);
//	}
//	sort(records.begin(), records.end(), records_cmp);
//	for (int i = 0; i < records.size(); i++)
//	{
//		string name = records[i].name;
//		string last_state = "off-line";
//		bool ok = false;
//		int j;
//		for (j = i; j<records.size() && name==records[j].name; j++)
//		{
//			if (last_state == "on-line" && records[j].state == "off-line")
//			{
//				ok = true;
//			}
//			last_state = records[j].state;
//		}
//		if (ok)
//		{
//			printf("%s %02d\n", name.c_str(), records[0].time.MOU);
//			float total = 0;
//			int lasting_time = 0;
//			string last_state = "off-line";
//			for (int k = i; k < j; k++)
//			{
//				if (last_state == "on-line" && records[k].state == "off-line")
//				{
//					total+=calculate(records[k - 1].time, records[k].time);
//				}
//				last_state = records[k].state;
//			}
//			printf("Total amount: $%.2f\n", total);
//		}
//		i = j-1;
//	}
//	return 0;
//}