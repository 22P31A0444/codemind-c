#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,q,s,e;
    scanf("%d",&n);
    e=n*n;
    s=log10(n)+1;
    q=pow(10,s);
    r=e%q;
    if(r==n)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}