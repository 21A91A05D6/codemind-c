#include<stdio.h>
int main()
{
    int i,a[100],n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        if(a[i]%2)
        {
            printf("%d",i);
            break;
        }
    }
}