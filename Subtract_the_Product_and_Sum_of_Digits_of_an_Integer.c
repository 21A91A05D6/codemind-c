#include<stdio.h>
int main()
{
    int sum=0,product=1,n,result;//132
    scanf("%d",&n);
    while (n > 0)
    {
            sum += n % 10;//13
            product *= n % 10; 
            n /= 10;
    }
    result=product-sum;
    printf("%d",result);
}