#include<stdio.h>
int main()
{
    long long int n;//long int for large number
    scanf("%lld",&n);
    if(n>=1000000000 && n<9999999999)//range
    {
        printf("Valid");
    }
    else
    {
        printf("Invalid");
    }
}