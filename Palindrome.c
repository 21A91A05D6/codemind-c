#include<stdio.h>  
int main()    
{    
    int n,r,sum=0,temp;    
    scanf("%d",&n);    
    temp=n;    
    while(n>0) //n=141  
    {    
       r=n%10; //r=14  
       sum=(sum*10)+r; //0*10 + 14 =    14
       n=n/10;  // 14%10=1  
    }    
    if(temp==sum)     // =141 = true
    printf("True");    
    else    
    printf("False");   
    return 0;  
} 