#include<stdio.h>//moving nonzero elements to first indexes
int main()// and replacing the old non zero index values with 0
{//
    int x[20],i,n,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    
    for(i=0;i<n;i++)
    {
        if(x[i]!=0)//checking for non zero elements
        {
            x[j]=x[i];//replace non zero element at 
            j++ ;          //j index or x[j] index
        }
    }
    
    for(i=j;i<n;i++)
    x[i]=0;
    for(i=0;i<n;i++)
    printf("%d ",x[i]);
    return 0;
    
}