//#include<stdio.h>
//#include<queue>
//using namespace std;
//#pragma warning(disable:4996)
//int N, M;
//int si, sj;
//char map[101][101];
//bool visited[101][101] = { 0 };
//struct state
//{
//	int i;
//	int j;
//};
//queue<state> q;
//int dx[4] = { 0,0,-1,1 };   //ÉÏÏÂ×óÓÒ Æ«ÒÆ
//int dy[4] = { 1,-1,0,0 };
//int bfs()
//{
//	int step = 0;
//	while (q.size())
//	{
//		step++;
//		int size = q.size();
//		while (size--)
//		{
//			state tmp = q.front(); q.pop();
//			visited[tmp.i][tmp.j] = true;
//			if (map[tmp.i][tmp.j] == 'G')return step;
//			for (int i = 0; i < 4; i++)
//			{
//				int	ni = tmp.i + dx[i];
//				int nj = tmp.j + dy[i];
//				if (ni >= 0 && ni < N && nj >= 0 && nj < M && visited[ni][nj]==false && (map[ni][nj] == '.' || map[ni][nj] == 'G'))
//				{
//					q.push(state{ ni,nj });
//				}
//			}
//		}
//	}
//	return 0;
//}
//int main()
//{
//	void *p = stdin;
//	scanf("%d%d", &N, &M);
//
//	for (int i = 0; i < N; i++)
//	{
//		scanf("%s", map[i]);
//	}
//	q.push(state{ si,sj });
//	printf("%d", bfs());
//	return 0;
//}
