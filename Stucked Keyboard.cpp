//#include<stdio.h>
//#include<string.h>
//#include<algorithm>
//using namespace std;
//#pragma warning(disable:4996)
//bool stucked[37];//a-z 0-25 , 0-9 26-35 ,_ 36
//bool showed[37];
////´íÁ½¸ö
//int getIndex(char a)
//{
//	if ('a' <= a && a <= 'z')
//	{
//		return a - 'a';
//	}
//	if ('0' <= a && a <= '9')
//	{
//		return a - '0' + 26;
//	}
//	return 36;
//}
//char getChar(int index)
//{
//	if (0 <= index && index <= 25)
//	{
//		return 'a' + index;
//	}
//	if (26 <= index && index <= 35)
//	{
//		return '0' + index - 26;
//	}
//	return '_';
//}
//int main()
//{
//	int k;
//	char str[10010];
//	scanf("%d", &k);
//	scanf("%s", str);
//	int len = strlen(str);
//	fill(stucked, stucked + 37, true);
//	int last_times = 1;
//	char lastword = str[0];
//	for (int i = 1; i < len; i++)
//	{
//		int the_index = getIndex(str[i]);
//		int last_index = getIndex(lastword);
//		showed[the_index] = true;
//		if (lastword != str[i])
//		{
//			if (last_times%k != 0)
//				stucked[last_index]=false;
//			if (i == len - 1) 
//			{
//				stucked[the_index] = false;
//			}
//			last_times = 0;
//		}
//		else
//		{
//			if (i == len - 1)
//			{
//				last_times++;
//				if (last_times%k != 0)stucked[last_index] = false;
//			}
//		}
//		last_times++;
//		lastword = str[i];
//	}
//	for (int i = 0; i < 37; i++)
//	{
//		if (stucked[i] && showed[i])
//		{
//			printf("%c", getChar(i));
//		}
//	}
//	printf("\n");
//	for (int i = 0; i < len; i++)
//	{
//		putchar(str[i]);
//		if (stucked[getIndex(str[i])] && showed[getIndex(str[i])])
//		{
//			i += k - 1;
//		}
//	}
//	return 0;
//}
//
