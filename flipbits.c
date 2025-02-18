#include <stdio.h>
#include <stdlib.h>

int main() {
int t;
scanf("%d",&t);
while(t--)
{
int a,b;
scanf("%d %d",&a,&b);
int res=a^b;
int flips=0;
while(res)
{
    flips+=res&1;
    res>>=1;
}
printf("%d\n",flips);
}
    return 0;
}