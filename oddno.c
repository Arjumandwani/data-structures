#include<stdio.h>
int main()
{
    int A[100],n,i;
    printf("Enter the number of elements");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(i=0;i<n;i++)
    {
        if(A[i]%2!=0)
        {
            printf("%d",A[i]);
        }
    }
    return 0;
}