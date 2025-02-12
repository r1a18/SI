#include <stdio.h>
#include <stdlib.h>
void toh(int n,char src,char temp,char des)
{
    if(n==0)
    {
        return;
    }
    else
    {
        toh(n-1,src,des,temp);
        printf("Move %d from %c to %c\n",n,src,temp);
        toh(n-1,des,temp,src);
        return;
        ;
    }
 }
int main() {
    int t;
    scanf("%d",&t);
    while(t--){
    int n;
    scanf("%d",&n);
    char src='A',temp='B',des='C';
    printf("%d\n",((1<<n)-1));
    toh(n,src,des,temp);
    }
    return 0;
}