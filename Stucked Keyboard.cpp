#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
#pragma warning(disable:4996)
bool stucked[37];//a-z 0-25 , 0-9 26-35 ,_ 36
bool showed[37];
int getIndex(char a)
{
	if ('a' <= a && a <= 'z')
	{
		return a - 'a';
	}
	if ('0' <= a && a <= '9')
	{
		return a - '0' + 26;
	}
	return 36;
}
char getChar(int index)
{
	if (0 <= index && index <= 25)
	{
		return 'a' + index;
	}
	if (26 <= index && index <= 35)
	{
		return '0' + index - 26;
	}
	return '_';
}
int main()
{
	int k;
	char str[10010];
	scanf("%d", &k);
	scanf("%s", str);
	int len = strlen(str);
	fill(stucked, stucked + 37, true);
	int times = 0;
	char lastword = -1;
	for (int i = 0; i < len; i++)
	{
		int index = getIndex(str[i]);
		showed[index] = true;
		if (lastword == -1)
		{
			times = 1;
			lastword = str[i];
			continue;
		}
		if (lastword != str[i])
		{
			if (times%k != 0)
			{
				stucked[getIndex(lastword)] = false;
			}
			times = 1;
			lastword = str[i];
		}
		else
		{
			times++;
		}
	}
	for (int i = 0; i < 37; i++)
	{
		if (stucked[i] && showed[i])
		{
			printf("%c", getChar(i));
		}
	}
	printf("\n");
	for (int i = 0; i < len; i++)
	{
		putchar(str[i]);
		if (stucked[getIndex(str[i])] && showed[getIndex(str[i])])
		{
			i += k - 1;
		}
	}
	return 0;
}

