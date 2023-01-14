#include<stdio.h>
int main()
{
    int n,e,s=0,r;
    scanf("%d",&n);
    e=n*n;
    while(e!=0)
    {
        r=e%10;
        e=e/10;
        s=s+r;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}