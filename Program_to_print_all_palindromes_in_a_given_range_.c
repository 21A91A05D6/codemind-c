#include<stdio.h>
int main()
{
    int num,rev_num,temp,rem,start,end;
    scanf("%d
 %d",&start,&end);
    for(num=start;num<=end;num++)
    {
        temp=num;
        rev_num=0;
        while(temp)
        {
            rem=temp%10;
            temp=temp/10;
            rev_num=rev_num*10+rem;
        }
        if(num==rev_num)
          printf("%d ",num);
    }
    return 0;
}