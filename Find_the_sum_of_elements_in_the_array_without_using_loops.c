#include<stdio.h>

int main()
{
    
    int arr[100], size, i, sum = 0;
    scanf("%d",&size);
    for(i = 0; i < size; i++)
          scanf("%d",&arr[i]);
          
    //add all elements to the variable sum.
    for(i = 0; i < size; i++)
          sum = sum + arr[i];
   
    printf("%d",sum);
    
    return 0;
}