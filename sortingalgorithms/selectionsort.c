#include <stdio.h>
#include <stdlib.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        int arr[n];
        int temp;
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        for(int i=n-1;i>0;i--)
        {
            int min=i;
            for(int j=i;j>=0;j--)
            {
                if(arr[j]>=arr[min])
                min=j;
            }
            printf("%d ",min);
                int temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
        }
        
        printf("\n");
    }
}