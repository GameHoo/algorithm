//#include<stdio.h>
//#include<math.h>
//#pragma warning(disable:4996)
////´íÁËÒ»¸ö
//struct node
//{
//	node *left;
//	node *right;
//	int index;
//};
//node *root=nullptr;
//int inorder[31];
//int length = 0;
//void push(int a)
//{
//	inorder[length++] = a;
//}
//void inorderTraversal(node* root)
//{
//	if (root == nullptr)return;
//	inorderTraversal(root->left);
//	push(root->index);
//	inorderTraversal(root->right);
//}
//bool Check(int PreOrder[], int PostOrder[],int length,node* &root)
//{
//	bool OK = false;
//	root = new node;
//	root->left = nullptr;
//	root->right = nullptr;
//	root->index = PreOrder[0];
//	//PreOrder 1~length-1
//	//PostOrder 0~length-2
//	if (length == 1)return true;
//	int sumA = 0, sumB = 0;
//	for (int i = 1; i < length; i++)
//	{
//		sumA += 1<<PreOrder[i];
//		sumB += 1<<PostOrder[i - 1];
//	}
//	int sumALeft=0, sumARight, sumBLeft=0, sumBRight;
//	int midI;
//	for (int i = 1; i < length; i++)
//	{
//		sumALeft += 1 << PreOrder[i];
//		sumARight = sumA - sumALeft;
//		sumBLeft += 1 << PostOrder[i-1];
//		sumBRight = sumB - sumBLeft;
//		if (sumALeft == sumBLeft && sumARight == sumBRight && sumALeft!=0 && sumARight!=0)
//		{
//			OK = true;
//			midI = i;
//			break;
//		}
//	}
//	if (OK)
//	{
//		return Check(&PreOrder[1], &PostOrder[0], midI, root->left) && Check(&PreOrder[midI + 1], &PostOrder[midI], length - midI-1,root->right);
//	}
//	else
//	{
//		Check(&PreOrder[1], PostOrder, length-1, root->left);
//		return false;
//	}
//}
//int a[33], b[33];
//int main()
//{
//	int N;
//	scanf("%d", &N);
//	for (int i = 0; i < N; i++)scanf("%d", &a[i]);
//	for (int i = 0; i < N; i++)scanf("%d", &b[i]);
//	bool yes = Check(a, b, N, root);
//	inorderTraversal(root);
//	printf(yes ? "Yes\n" : "No\n");
//	for (int i = 0; i < length; i++)
//	{
//		printf("%d", inorder[i]);
//		if (i != length - 1)printf(" ");
//	}
//	printf("\n");
//	return 0;
//}
//
