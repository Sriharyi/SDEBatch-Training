/*Given an integer, find whether it is an armstrong number or not.*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int temp =n;
    int count=0;
    while(temp>0)
    {
        count++;
        temp = temp/10;
    }
    temp = n;
    int sum =0;
    while (temp>0)
    {
        int ud = temp%10;
        int val =1;
        for(int i=0;i<count;i++)
        {
            val *= ud;
        }
        sum+=val;
        temp = temp/10;
    }
    if(sum==n)
    {
        printf("is Armstrong");
    }
    else
    {
          printf("is Not Armstrong");
    }
    
    
}