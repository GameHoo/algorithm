#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<string>
#pragma warning(disable:4996)
int rate[24];
#include<vector>
#include<map>
using namespace std;
struct Time
{
	int MOU, DAY, HOU, MIN;
};
struct record
{
	string name;
	Time time;
	string state;
};
vector<record> records;
bool records_cmp(const record &a, const record &b)
{
	if (a.name > b.name)return false;
	if (a.name < b.name)return true;
	if (a.time.MOU > b.time.MOU)return false;
	if (a.time.MOU < b.time.MOU)return true;
	if (a.time.DAY > b.time.DAY)return false;
	if (a.time.DAY < b.time.DAY)return true;
	if (a.time.HOU > b.time.HOU)return false;
	if (a.time.HOU < b.time.HOU)return true;
	if (a.time.MIN > b.time.MIN)return false;
	if (a.time.MIN < b.time.MIN)return true;
	return true;
}
int rate[24];
void calculate(Time s,Time t,float &total,int lasting_time)
{

}
int main()
{
	for (int i = 0; i < 24; i++)scanf("%d", &rate[i]);
	int n; scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		record New_Record;
		cin >> New_Record.name;
		scanf("%d:%d:%d:%d", &New_Record.time.MOU, &New_Record.time.DAY, &New_Record.time.HOU, &New_Record.time.MIN);
		cin >> New_Record.state;
		records.push_back(New_Record);
	}
	sort(records.begin(), records.end(), records_cmp);
	for (int i = 0; i < records.size(); i++)
	{
		string name = records[i].name;
		string last_state = "off-line";
		bool ok = false;
		int j;
		for (j = i;name==records[j].name; j++)
		{
			if (last_state == "on-line" && records[j].state == "off-line")
			{
				ok = true; break;
			}
			last_state = records[j].state;
		}
		if (ok)
		{
			printf("%s %02d\n", name, records[0].time.MOU);
			float total = 0;
			int lasting_time = 0;
			string last_state = "off-line";
			for (int k = i; k < j; k++)
			{
				if (last_state == "on-line" && records[k].state == "off-line")
				{
					calculate(records[k - 1].time, records[k].time, total, lasting_time);

				}
			}
		}
	}
	return 0;
}