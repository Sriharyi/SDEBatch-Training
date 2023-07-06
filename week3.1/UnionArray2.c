/*https://practice.geeksforgeeks.org/problems/union-of-two-arrays3538/1?page=2&sortBy=submissions*/
/*1.Given two arrays a[] and b[] of size n and m respectively. The task is to find the number of
elements in the union between these two arrays.
Union of the two arrays can be defined as the set containing distinct elements from both the
arrays. If there are repetitions, then only one occurrence of element should be printed in the
union.
Note : Elements are not necessarily distinct.
Example 1:
Input:
5 3
1 2 3 4 5
1 2 3
Output:
5
Explanation:
1, 2, 3, 4 and 5 are the
elements which comes in the union set
of both arrays. So the count is 5.
Example 2:
Input:
6 2
85 25 1 32 54 6
85 2
Output:
7
Explanation:
85, 25, 1, 32, 54, 6, and
2 are the elements which comes in the
union set of both arrays. So the count is 7.*/


/// #include<stdio.h>
// int main()
// {
//     int n,m,i,j,count=0;
//     scanf("%d%d",&n,&m);
//     int a[n],b[m];
//     for(i=0;i<n;i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     for(j=0;j<m;j++)
//     {
//         scanf("%d",&b[j]);
//     }
//     int carr[100001]={0};
//     for(i=0;i<n;i++)
//     {
//         carr[a[i]]++;
//     }
//     for(i=0;i<m;i++)
//     {
//         carr[b[i]]++;
//     }
//     for(i=0;i<100001;i++)
//     {
//         if(carr[i]>=1)
//         {
//             count++;
//         }
//     }
//     printf("%d",count);
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, i, j, count = 0;
    scanf("%d %d", &n, &m);
    int a[n], b[m];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (j = 0; j < m; j++)
    {
        scanf("%d", &b[j]);
    }
    int max_value = 0;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max_value)
            max_value = a[i];
    }
    for (j = 0; j < m; j++)
    {
        if (b[j] > max_value)
            max_value = b[j];
    }
    int *carr = (int *)calloc((max_value + 1), sizeof(int));
    if (carr == NULL)
    {
        printf("Memory allocation failed.");
        return 0;
    }
    for (i = 0; i < n; i++)
    {
        carr[a[i]]++;
    }
    for (i = 0; i < m; i++)
    {
        carr[b[i]]++;
    }
    for (i = 0; i <= max_value; i++)
    {
        if (carr[i] >= 1)
        {
            count++;
        }
    }
    printf("%d", count);

    free(carr); // Free the dynamically allocated memory

    return 0;
}
