#include<stdio.h>
int main()
{
    int a,b,n,k=0,i=0,q,c;
    scanf("%d",&n);
    q=n;
    for(a=q;a>0;a=a/10)
    {
        i++;
        b=a%10;
        for(n=q;n>0;n=n/10)
        {
            c=n%10;
            if(b==c)
            {
                k++;
            }
        }
    }
    if(k==i)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}