#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n;
        scanf("%lld",&n);
        int count=0;
        while(n!=0)
        {
            count++;
            n=n&n-1;
        }
        printf("%d\n",count);
    }   
    return 0;
}