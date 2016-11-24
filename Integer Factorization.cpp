//#include<stdio.h>
//#include<vector>
//#include<map>
//#include<queue>
//#include<cmath>
//#pragma warning(disable:4996)
////´íÒ»¸ö
//using namespace std;
//double cur_sum = 0;
//int cur_factorsSum = 0;
//vector<int> *cur_ans=new vector<int>;
//map<int, int> factorsSum_of_ans;
//int N, K, P;
//class cmp
//{
//public:
//	bool operator()(const vector<int>* a,const vector<int>* b)
//	{
//		int fa = factorsSum_of_ans[reinterpret_cast<long>(a)];
//		int fb = factorsSum_of_ans[reinterpret_cast<long>(b)];
//		return fa < fb;
//	}
//};
//priority_queue<vector<int>*, vector<vector<int>* >, cmp> ans;
//void dfs(int k=0,int last=N)
//{
//	if (k == K)
//	{
//		if (cur_sum == (double)N)
//		{
//			factorsSum_of_ans[reinterpret_cast<long>(cur_ans)] = cur_factorsSum;
//			ans.push(cur_ans);
//			vector<int>* new_vector = new vector<int>;
//			new_vector->insert(new_vector->end(), cur_ans->begin(), cur_ans->end());
//			cur_ans = new_vector;
//		}
//		return;
//	}
//	for (int i = 1; i <=last; i++)
//	{
//		double a = pow(i,P);
//		if (a + cur_sum > (double)N)break;
//		cur_sum += a;
//		cur_factorsSum += i;
//		cur_ans->push_back(i);
//		dfs(k+1,i);
//		cur_ans->pop_back();
//		cur_factorsSum -= i;
//		cur_sum -=a;
//	}
//}
//int main()
//{
//	scanf("%d%d%d", &N, &K, &P);
//	dfs();
//	if (ans.empty())
//	{
//		printf("Impossible");
//	}
//	else
//	{
//		cur_ans = ans.top();
//		printf("%d = ", N);
//		for (int i = 0; i < cur_ans->size(); i++)
//		{
//			printf("%d^%d", (*cur_ans)[i],P);
//			if (i != cur_ans->size() - 1)printf(" + ");
//		}
//	}
//	
//	return 0;
//}