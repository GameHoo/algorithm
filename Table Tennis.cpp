//#include<stdio.h>
//#include<algorithm>
//#include<queue>
//#include<vector>
//using namespace std;
//#pragma warning(disable:4996)
//int N, K, M;
//struct Time
//{
//	int HH; int MM; int SS;
//	friend Time operator +(Time time, int minutes)
//	{
//		while (minutes--)
//		{
//			if (time.MM == 59)
//			{
//				time.HH++;
//				time.MM = 0;
//			}
//			else
//			{
//				time.MM++;
//			}
//		}
//		return time;
//	}
//	friend bool operator <(Time a, Time b)
//	{
//		if (a.HH < b.HH)return true;
//		if (a.HH == b.HH)
//		{
//			if (a.MM < b.MM)return true;
//			if (a.MM == b.MM && a.SS < b.SS)return true;
//		}
//		return false;
//	}
//	friend bool operator >(Time a, Time b)
//	{
//		if (a < b)return false;
//		if (a == b)return false;
//		return true;
//	}
//	friend bool operator ==(Time a, Time b)
//	{
//		if (a.HH == b.HH && a.MM == b.MM && a.SS == b.SS)return true;
//		return false;
//	}
//};
//int getWaitTime(Time a,Time b)
//{
//	int minutes = 0;
//	minutes += (b.HH - a.HH) * 60;
//	minutes += (b.MM - a.MM);
//	if ((b.SS - a.SS) >= 30)minutes++;
//	return minutes;
//}
//struct Player
//{
//	Time ArrivingTime;
//	Time ServingTime;
//	int PlayingTime;
//	bool IsVIP;
//	bool Servered;
//};
//struct Table
//{
//	Time CurrentTime;
//	int ServeredPlayerCount;
//	int CurrentPlayer;
//	bool IsVIP;
//};
//class cmp
//{
//public:
//	bool operator ()(Player &a,Player &b)
//	{
//		return a.ArrivingTime < b.ArrivingTime;
//	}
//	static bool ServingTime(Player &a, Player &b)
//	{
//		return a.ServingTime < b.ServingTime;
//	}
//};
//Player Players[10000];
//Table Tables[101];
//bool push()//返回false表示没空桌子
//{
//	int FastEndTable=-1;
//	Time FastEndTableTime;
//	//先选择一个空桌
//	for (int i = 1; i <= K; i++)
//	{
//		if (Tables[i].CurrentPlayer==-1 && (FastEndTable==-1||Tables[i].CurrentTime<FastEndTableTime))
//		{
//			FastEndTable = i;
//			FastEndTableTime = Tables[i].CurrentTime;
//		}
//	}
//	//没有空桌
//	if (FastEndTable == -1)return false;
//	//从这时候已经来到的顾客里选择优先级最高的
//	int BestPlayer = -1;
//	for (int i = 1; i <= N; i++)
//	{
//		//所有顾客
//		if (!Players[i].Servered && BestPlayer == -1 && (Tables[FastEndTable].CurrentTime > Players[i].ArrivingTime || Tables[FastEndTable].CurrentTime == Players[i].ArrivingTime))
//		{
//			BestPlayer = i;
//		}
//		//这是个VIP
//		if (Players[i].IsVIP && !Players[i].Servered && (Tables[FastEndTable].CurrentTime > Players[i].ArrivingTime || Tables[FastEndTable].CurrentTime == Players[i].ArrivingTime))
//		{
//			BestPlayer = i; break;
//		}
//	}
//	if (BestPlayer != -1)
//	{
//		Time endTime;
//		endTime.HH = 21; endTime.MM = 0; endTime.SS = 0;
//		if (Tables[FastEndTable].CurrentTime<endTime)
//		{
//			Tables[FastEndTable].ServeredPlayerCount++;
//		}
//		Players[BestPlayer].Servered = true;
//		Players[BestPlayer].ServingTime = Tables[FastEndTable].CurrentTime;
//		Tables[FastEndTable].CurrentPlayer = BestPlayer;
//		return true;
//	}
//	//如果这时候没有顾客来 直接选择 等待队列下一个到来的顾客 更新Table的当前时间
//	if (BestPlayer == -1)
//	{
//		for (int i = 1; i <= N; i++)
//		{
//			if (!Players[i].Servered)
//			{
//				Tables[FastEndTable].CurrentTime = Players[i].ArrivingTime;
//				Time endTime;
//				endTime.HH = 21; endTime.MM = 0; endTime.SS = 0;
//				if (Tables[FastEndTable].CurrentTime<endTime)
//				{
//					Tables[FastEndTable].ServeredPlayerCount++;
//				}
//				Players[i].Servered = true;
//				Players[i].ServingTime = Tables[FastEndTable].CurrentTime;
//				Tables[FastEndTable].CurrentPlayer = i;
//				break;
//			}
//		}
//	}
//	return true;
//	//如果没有顾客了 不可能 这个push函数 每次成功push就返回true 调用者可以知道它push了多少
//}
//bool pop()
//{
//	int FastEndTable = -1;
//	Time FastEndTableTime;
//	//先选择一个有客人的桌子
//	for (int i = 1; i <= K; i++)
//	{
//		if (Tables[i].CurrentPlayer != -1 && (FastEndTable == -1 || Tables[i].CurrentTime + Players[Tables[i].CurrentPlayer].PlayingTime<FastEndTableTime))
//		{
//			FastEndTable = i;
//			FastEndTableTime = Tables[i].CurrentTime + Players[Tables[i].CurrentPlayer].PlayingTime;
//		}
//	}
//	if (FastEndTable != -1)
//	{
//		Players[Tables[FastEndTable].CurrentPlayer].Servered = true;
//		Tables[FastEndTable].CurrentTime= Tables[FastEndTable].CurrentTime + Players[Tables[FastEndTable].CurrentPlayer].PlayingTime;
//		Tables[FastEndTable].CurrentPlayer = -1;
//	}
//	if (FastEndTable == -1)return true;
//	return false;
//}
//void OutPutTime(Time a)
//{
//	printf("%02d:%02d:%02d", a.HH, a.MM, a.SS);
//}
//int main()
//{
//	scanf("%d", &N);
//	int VIPIndex = 0;
//	for (int i = 1; i <= N; i++)
//	{
//		Time ArrrivingTime;
//		int PlayingTime;
//		int tag;
//		scanf("%d:%d:%d %d %d", 
//			&ArrrivingTime.HH, &ArrrivingTime.MM, 
//			&ArrrivingTime.SS, &PlayingTime, &tag);
//
//		Players[i].ArrivingTime = ArrrivingTime;
//		Players[i].PlayingTime = PlayingTime;
//		Players[i].Servered = false;
//		if (tag == 1)
//		{
//			Players[i].IsVIP = true;
//		}
//		else
//		{
//			Players[i].IsVIP = false;
//		}
//	}
//	sort(Players+1, Players + N+1, cmp());
//	scanf("%d%d", &K,&M);
//	Time start; start.HH = 8; start.MM = 0; start.SS = 0;
//	for (int i = 1; i <= K; i++)
//	{
//		Tables[i].CurrentTime=start;
//		Tables[i].IsVIP = false;
//		Tables[i].CurrentPlayer = -1;
//		Tables[i].ServeredPlayerCount = 0;
//	}
//	for (int i = 0; i < M;i++)
//	{
//		int index;
//		scanf("%d", &index);
//		Tables[index].IsVIP = true;
//	}
//	int len = N;
//	while (len--)
//	{
//		if (!push())
//		{
//			pop();
//			push();
//		}
//	}
//	while (!pop())
//	{
//
//	}
//	sort(Players + 1, Players + N + 1, cmp::ServingTime);
//
//	for (int i = 1; i <= N; i++)
//	{
//		Time endTime;
//		endTime.HH = 21; endTime.MM = 0; endTime.SS = 0;
//		if (Players[i].ServingTime < endTime)
//		{
//			OutPutTime(Players[i].ArrivingTime);
//			printf(" ");
//			OutPutTime(Players[i].ServingTime);
//			printf(" ");
//			printf("%d\n", getWaitTime(Players[i].ArrivingTime, Players[i].ServingTime));
//		}
//		else
//		{
//			break;
//		}
//	}
//	for (int i = 1; i <= K; i++)
//	{
//		printf("%d", Tables[i].ServeredPlayerCount);
//		if (i != K)printf(" ");
//	}
//	printf("\n");
//	return 0;
//}