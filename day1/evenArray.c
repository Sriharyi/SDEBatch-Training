/*You are given an array of size N .You have to print the elements of the array in the Even
index of the array.*/
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < n; i=i+2)
    {
        printf("%d ",arr[i]);
    }
    
}
