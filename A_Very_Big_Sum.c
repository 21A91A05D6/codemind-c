#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int arr[100];
    int n,i;
    scanf("%d",&n);
      long long int sum;
    sum=0;
    for(i=0;i<n;i++)
    {
        scanf("%lli",&arr[i]);
    }
    
    for(i=0;i<n;i++)
    {
        sum+=arr[i];
    }
    printf("%lli",sum);
    return 0;
      
    
}