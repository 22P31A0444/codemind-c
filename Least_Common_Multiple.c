#include<stdio.h>
int main()
{
    int a,b,i,c;
    scanf("%d%d",&a,&b);
    for(i=1;i<=b;i++)
    {
        if(i*a%b==0)
        {
            c=0;
            break;
        }
    }
    if(c==0)
    printf("%d",i*a);
}