#include<stdio.h>
int main()
{
     int a[10][10],r,c,sum=0,i,j;
     
     scanf("%d",&r);
     scanf("%d",&c);
     for(i=0;i<r;i++)//matrix
          for(j=0;j<c;j++)
          {
               scanf("%d",&a[i][j]);//reading
          }
            
     for(i=0;i<r;i++)
          for(j=0;j<c;j++)
               sum=sum+a[i][j];//sum of matrix elements
     printf("%d",sum);
     return 0;
}

