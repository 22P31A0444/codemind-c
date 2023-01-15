#include<stdio.h>
int main()
{
    int n,i,r,a=0,m=0,k=0;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        r=i%10;
        a++;
        if(r%2==0)
        m++;
        if(i%2!=0)
        k++;
    }
    if(a==m)
    printf("Even");
      else if(a==k)
    printf("Odd");
    else
    printf("Mixed");
    
}