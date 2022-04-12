#include<stdio.h>
int main()
{
	int l,b,w,c,Area,area,totalarea,cost;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    Area=l*b;
    area=(l+2*w)*(b+2*w);
    totalarea=2*w*(l+b+2*w);
    cost=c*totalarea;
    printf("%d",cost);
}