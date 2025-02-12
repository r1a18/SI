#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    long long int t;
    scanf("%lld",&t);
    while(t--)
    {
        long long int n;
        scanf("%lld",&n);
        if((n&n-1)==0)
        {
            printf("True\n");
        }
        else 
        printf("False\n");
    }
     return 0;
}