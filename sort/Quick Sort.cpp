//
// Created by Ts on 2018/3/20.
//

//
// Created by Ts on 2018/3/20.
//
#include <stdio.h>
int a[]={9,8,7,6,5,4,3,2,1,0};
void swap(int&a,int&b)
{
    int c=a;
    a=b;
    b=c;
}
void output()
{
    for(int i=0;i<10;i++)
    {
        printf("%d",a[i]);
        printf(" ");
    }
    printf("\n");
}
int divide(int l, int r)
{
    int key=a[l];
    int turn=0;
    while(l!=r)
    {
        if(turn==0)
        {
            turn=1;
            while(a[r]>key)
    }
        else
        {
            turn=0;
        }
    }
    return l;
}
void quick_sort(int l,int r)
    {
    if(l>=r)
        return;
    int mid=divide(l,r);
    quick_sort(l,mid-1);
    quick_sort(mid+1,r);

}
int main()
{
    quick_sort(0,9);
    output();
    return 0;
}
