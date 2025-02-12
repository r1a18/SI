#include <stdio.h>
#include <stdlib.h>
int pattern(int n)
{
    int m=1;
    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=i-1;j++){
            printf(" ");
        }
        for(int k=1;k<=m;k++)
        {
            printf("*");
        }
        printf("\n");
        m++;
    }
}
int main() {
int t;
scanf("%d",&t);
int r=t;
while(t--)
{
    int n;
    scanf("%d",&n);
    printf("Case #%d:\n",r-t);
    pattern(n);
}
    return 0;
}