#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i;
    float r,s=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        r=sqrt(i);
        s=s+r;
    }
    printf("%.2f",s);
}