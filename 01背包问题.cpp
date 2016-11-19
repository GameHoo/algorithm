//#include<stdio.h>
//#pragma warning(disable:4996)
//int n;
//int w[100];
//int v[100];
//int W;
//int getMaxV(int index,int weight)
//{
//	if (index >= n)
//	{
//		return 0;     //价值为0
//	}
//	if (weight > W)   //刚刚超过
//	{
//		return 0;     //价值为0 相当于没有加物品 
//	}
//	int v1=0, v2=0;
//    v1 = getMaxV(index + 1, weight);                  //不要当前的
//	if(weight+w[index]<=W)
//	v2 = getMaxV(index + 1, weight + w[index]) + v[index];       //要当前的
//	return v1 > v2 ? v1 : v2;
//}
//
//int main()
//{
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		int t1, t2;
//		scanf("%d%d", &t1, &t2);
//		w[i] = t1;
//		v[i] = t2;
//	}
//	scanf("%d", &W);
//	printf("%d", getMaxV(0, 0)) ;
//	return 0;
//} 