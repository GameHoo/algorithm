#include<cstdio>
#include<iostream>
#include<cstring>
#include<string>
#include<fstream>
using namespace std;
#pragma warning(disable:4996)
string check(string a)
{
	for (int i = 0; i < a.size(); i++)
	{
		if (('a' <= a[i] && a[i] <= 'z') || ('0' <= a[i] && a[i] <= '9'))
		{
			
		}
		else if(a[i]<0)
		{
			if (i == 0)return "";
			else
			{
				return a.substr(0, i);
			}
		}
	}
}
int main()
{
	char a[100];
	ifstream in("C:\\Users\\GameHoo\\Desktop\\in.txt");
	ofstream out("out.txt");
	while (!in.eof())
	{
		string s;
		in >> s;
		s = check(s);
		if(s!="")
		out << "http://vip.hj699.com:16880/tiff/"+s+".tif" << endl;
	}
	return 0;
}