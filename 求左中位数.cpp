//#include<cstdio>
//using namespace std;
//#pragma warning(disable:4996)
//#define MAX_VAL 10000
//int tree[MAX_VAL];
//int a[5] = { 1,2,2,2,5};
//void update(int idx, int val)
//{
//	while (idx < MAX_VAL)
//	{
//		tree[idx] += val;
//		idx += idx&(-idx);
//	}
//}
//int get_c(int idx)
//{
//	int sum = 0;
//	while (idx>0)
//	{
//		sum += tree[idx];
//		idx -= idx&(-idx);
//	}
//	return sum;
//}
//int get_mid()
//{
//	int left = 1, right = 5, mid;//������1������5����
//	int Rank = 5;//����λ���ڻ��ߵ���Rank����С������
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (get_c(mid) == Rank)
//		{
//			return mid;
//		}
//		else if (get_c(mid)<Rank)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			right = mid - 1;
//		}
//	}
//	return left;
//}
//int main()
//{
//	for (int i = 0; i < 5; i++)update(a[i], 1);
//	printf("%d", get_mid());
//	return 0;
//}