#include<stdio.h>
int main() // in btw 2 and 5 
{
    int x[20],n,i,a,b,min=99;//always give max=0, min=large
    scanf("%d",&n);//initialize max with least value
    for(i=0;i<n;i++)//and min with large number
        scanf("%d",&x[i]);
    scanf("%d%d",&a,&b);
    //element in btw a and b ignore, else consider
    for(i=0;i<n;i++)
    {
        if(x[i]>=a && x[i]<=b) // elemment is inbtw a and b
           continue;// i value is incremented no need consider or check
        else// consider
        {
            if(min>x[i])
            min=x[i];
        }
           
    }
    if(min==99)
      printf("-1");
    else
    printf("%d",min);
    
}