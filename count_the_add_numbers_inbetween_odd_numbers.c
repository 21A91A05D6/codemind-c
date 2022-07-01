#include<stdio.h>
int main()
{
    int n,i,a[100],c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i-1]%2 && a[i+1]%2 && a[i]%2)
        {
            c++;
        }
        
    }
    printf("%d",c);
}