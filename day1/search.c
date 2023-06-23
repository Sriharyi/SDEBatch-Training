/*You are given an integer array of size N and a key value X.You have to find whether the key
is present in the array or not.if present print the index else print -1*/
#include<stdio.h>
int main()
{
    int n,x,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(a[i]==x)
        {
            printf("%d",i);
            break;
        }
    }
    if(i==n)
        printf("-1");
    return 0;
}