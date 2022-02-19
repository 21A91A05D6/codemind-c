#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,m,r,res;
    scanf("%d%d%d%d",&x,&y,&m,&r);
     if(res=pow(x,y))
     {
         r=res%m;
         printf("%d",r);
     }
     
     
}