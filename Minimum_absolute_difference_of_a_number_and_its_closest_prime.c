#include<stdio.h>
int main()
{
    int n,i,j,plu,min,count;
    scanf("%d",&n);
    //printf("%d",n);
    for(i=n;i>0;i++)
    {
        count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        {
            plu=i;
            break;
        }
    }
    //printf("%d",plu);
    if(plu==n)
    printf("0");
    else
    {
        for(i=n-1;i>0;i--)
        {
            count=0;
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                count++;
            }
            if(count==2)
            {
                min=i;
                break;
            }
        }
        //printf("%d",min);
        if(plu-n>n-min)
        printf("%d",n-min);
        else if(plu-n<n-min)
        printf("%d",plu-n);
        else if(plu-n==n-min)
        printf("%d",n-min);
    }
}