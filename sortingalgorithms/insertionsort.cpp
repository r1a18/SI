#include <bits/stdc++.h>
using namespace std;

void sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int ele=arr[i];
        int j=i-1;
        while((j>=0)&&(arr[j]>ele))
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=ele;
        if(i>0)
        {
        cout<<j+1<<" ";
        }
    }
    cout<<"\n";
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        sort(arr,n);
    }
    return 0;
}