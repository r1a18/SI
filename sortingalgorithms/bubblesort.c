#include <stdio.h>
#include <stdlib.h>

int main() {
    int  t;
    scanf("%d",&t);
    while(t--)
    {
        int temp;
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        
        int c=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-i-1;j++){
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                    c++;
                }
            }
        }
        printf("%d\n",c);

    }
    return 0;
}