#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    int c=0;
    while(t--){
        int n;
        cin>>n;
        c++;
        cout<<"Case #"<<c<<":"<<endl;
        for(int i=1;i<=n/2;i++){
            for(int j=1;j<=n/2-i+1;j++){
                cout<<" ";
            }
            for(int k=1;k<2*i;k++){
                if(i==1||k==1||k==2*i-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
        for(int i=n/2+1;i>=1;i--){
            for(int j=1;j<=n/2-i+1;j++){
                cout<<" ";
            }
            for(int k=1;k<2*i;k++){
                if(i==1||k==1||k==2*i-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<"\n";
        }
    }
    return 0;
}