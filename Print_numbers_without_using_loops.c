#include<stdio.h>
int main()
{
    int i,N;
    scanf("%d",&N);
    if(!(N>=1 && N<=1000))
    {
        printf("The Number Series is Not Possible Print");
    }
    for(i=1;i<=N && N<=1000 ;i++)
    {
        printf("%d ",i);
    }
}