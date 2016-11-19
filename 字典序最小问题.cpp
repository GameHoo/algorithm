//#include<stdio.h>
//#include<iostream>
//#include<string>
//using namespace std;
//#pragma warning(disable:4996)
//int main()
//{
//	string s;
//	string t;
//	int n;
//	cin >> n;
//	cin >> s;
//	int i = 0,j = n - 1;
//	while (n--)
//	{
//		if (s[i] == s[j])
//		{
//			for (int d = 0;; d++)
//			{
//				if (i + d < j - d)
//				{
//					if (s[i + d] == s[j - d])
//					{
//
//					}
//					else
//					{
//						if (s[i + d] < s[j - d])
//						{
//							t += s[i++];
//							break;
//						}
//						else
//						{
//							t += s[j++];
//							break;
//						}
//					}
//				}
//				else
//				{
//					if (i + d == j - d)
//					{
//						t += s[i++];
//						break;
//					}
//					else
//					{
//						t += s[i++];
//						break;
//					}
//				}
//			}
//		}
//		else
//		{
//			if (s[i] > s[j])
//			{
//				t += s[j--];
//			}
//			else
//			{
//				t += s[i++];
//			}
//		}
//	}
//	return 0;
//}