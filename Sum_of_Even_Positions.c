#include<stdio.h>
int main()
{
    int n,sum=0,arr[100],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(i%2==0)
        sum+=arr[i];
    }
    printf("%d",sum);
}