#include<stdio.h>
int main()
{
    int n,t,i,fac=1;
    scanf("%d",&t);
    for(;t>0;--t)
    {
        scanf("%d",&n);
        for(i=n;i>0;i--)
        {
            fac=fac*i;
        }
        printf("%d
",fac);
        fac=1;
    }
}