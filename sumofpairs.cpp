#include <bits/stdc++.h>
#include<iostream>
#include<unordered_map>
using namespace std;
int main() {
    int a;
    cin>>a;
    while(a--)
    {
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }

        unordered_map<int,int>freq;
        for(int i=0;i<n;i++)
        {
        {
            if(freq.find(arr[i])!=freq.end())
            {
                freq[arr[i]]++;
            }
            else
            freq[arr[i]]=1;
        }
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            int b=k-arr[i];
            if(freq.find(b)!=freq.end())
            {
                if(arr[i]==b)
                {
                    if(freq[arr[i]]>1)
                    {
                        flag=1;
                        break;
                    }
                }
                else
                flag=1;
            }
        }
        if(flag)
        cout<<"True"<<endl;
        else
        cout<<"False"<<endl;
    } 
    return 0;
}