#include<stdio.h>
int main()
{
    int A[100],count,n,a;
    printf("Enter the number of elements in an array");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",A[i]);
    }
    printf("enter the element you want to find frequency of ");
    scanf("%d",&a);
    for(int i=0;i<n;i++)
    {
        if(A[i]==a)
        count++;
    }
    printf("frequency of %d = %d",a,count);
    return 0;
    
}