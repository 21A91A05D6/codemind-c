#include<stdio.h>
int main()
{
    int m,n,i,j,sum=0,count=0 ;
    scanf("%d%d",&m,&n);
    
    for(i=m;i<=n;i++)
    {
        sum=0;
        for(j=i;j<=n;j++)
        {
            sum=sum+j;
            if(sum%2!=0)//odd sum 
            {
                count++;//if no then j is incremented and 
                //next element is checked that's it
            }
        }
    }
    printf("%d",count);
    return 0;
}
/* input 1,3
 L     R
 1  2  3
 
 1 = 1  SUM =ODD INTGER
 1  2  = 3 SUM = ODD INTEGER
 3 =  SUM =ODD INTEGER
 2  3 SUM = ODD INTEGER
 OUTPUT = 4 sub arrays 
 
 sample input 2
 L           R
 3 4 5 6 7 8 9
 ANS 3
     3 4
     3 4 5 6 7
     3 4 5 6 7 8
     
     NOW START FROM 4
     4 5
     4 5 6 
     4 5 6 7
     4 5 6 7 8 9
     
     NOW START FROM 5...... so on....
     we will get 16 odd integers
 */