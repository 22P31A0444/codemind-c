#include<stdio.h>
int main()
{
    int n,s=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        if(r>s)
        {
            s=r;
        }
        n=n/10;
    }
    printf("%d",s);
}