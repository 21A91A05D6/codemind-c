#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {
    long n,k,q,i;
    long a[100000];
    scanf("%ld%ld%ld",&n,&k,&q);
    long r=k%n;
    for(i=r;i<n;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<r;i++)
        scanf("%ld",&a[i]);
    for(i=0;i<q;i++)
    {
        scanf("%ld",&k);
        printf("%ld
",a[k]);    
    }    
        
    return 0;
}