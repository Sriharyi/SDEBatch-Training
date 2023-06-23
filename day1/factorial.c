/*You are given a positive integer N .You have to find the factorial of the number.*/

#include<stdio.h>
int main()
{
    printf("hello world");
    int n;
    scanf("%d",&n);
    unsigned long int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    printf("answer is :%lu",fact);
    printf("\n");
}