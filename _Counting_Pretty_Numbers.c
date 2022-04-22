#include <stdio.h>
int main() 
{
	int t,x,y,d=0,z,c=0;
	scanf("%d
",&t);
	while(t>d)
	{
	    scanf("%d %d
",&x,&y);
	    while(x!=(y+1))
	    {
	        z=x%10;
	        if(z==2 || z==3 || z==9)
	        {
	            c=c+1;
	        }
	        x=x+1;
	    }
	    printf("%d
",c);
	    c=0;
	    d=d+1;
	}
	return 0;
}