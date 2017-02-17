//#include<stdio.h>
//#pragma warning(disable:4996)
//const int MAX_N = 10000;
//int heap[MAX_N];
//int length = 0;
//void swap(int& a, int &b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void push(int a)
//{
//	int i = length++; //i 代表 a 的位置 ，先从末尾插入
//	heap[i] = a;
//	while (i>0)       //i>0 代表 有父节点
//	{
//		int p = (i - 1) / 2;
//		if (heap[p] > a)
//		{
//			swap(heap[p], heap[i]);
//			i = p;
//		}
//		else
//		{
//			break;
//		}
//	}
//}
//int pop()
//{
//	int result = heap[0];
//	heap[0] = heap[length - 1];
//	length--;
//	int i = 0;
//	while (2*i+1<length)//有儿子
//	{
//		int left = 2 * i + 1;
//		int right = 2 * i + 2;
//		if (right < length && heap[right] < heap[left]) left = right;
//		if (heap[i] > heap[left])
//		{
//			swap(heap[i], heap[left]);
//			i = left;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return result;
//}
//int main()
//{
//	push(10);
//	push(9);
//	push(8);
//	push(7);
//	push(8);
//	push(100);
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	printf("%d\n", pop());
//	getchar();
//	return 0;
//}
