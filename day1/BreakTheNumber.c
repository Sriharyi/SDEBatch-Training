/*You are given a positive integer N .You have to find the one’s and tens's place digit of the
number.*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("%d %d",n%10, (n/10)%10);
}