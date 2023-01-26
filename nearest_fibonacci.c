#include<stdio.h>
int main()
{
    int a=0,b=1,c,n,d,e,f,min,max,i,g;
    scanf("%d",&n);
    for(i=1;i>0;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c<n)
        {
            min=c;
        }
        else
        {
            max=c;
            break;
        }
    }
    e=n-min;
    f=max-n;
    if(e==f)
    {
        printf("%d %d",min,max);
    }
    else
    {
        g=(e<f)?min:max;
        printf("%d ",g);
    }
}