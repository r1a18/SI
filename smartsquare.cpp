#include <bits/stdc++.h>
using namespace std;
//int min_cost=INT_MAX;

bool valid(int B[])
{
    int s1=B[0]+B[1]+B[2];
    int s2=B[3]+B[4]+B[5];
    int s3=B[6]+B[7]+B[8];
    int s4=B[0]+B[3]+B[6];
    int s5=B[1]+B[4]+B[7];
    int s6=B[2]+B[5]+B[8];
    int s7=B[0]+B[4]+B[8];
    int s8=B[2]+B[4]+B[6];
    if(s1%5==0 && s2%5==0 && s3%5==0 && s4%5==0 && s5%5==0 && s6%5==0 && s7%5==0 && s8%5==0)
    {
       
            return true;
    }
        else{
        return false;
        }
}
int calcost(int B[],int A[])
{
    int c=0;
    for(int i=0;i<9;i++)
    {
        c+=abs(A[i]-B[i]);
    }
    return c;
}
void magic(int B[],bool v[],int idx,vector<vector<int>> &combinations)
{
    if(idx==9) 
    {
        if(valid(B))
        {
            vector<int>c(B,B+9);
            combinations.push_back(c);
        }  
        return ;
    }
      for(int i=1;i<=9;i++)
      {
          if(!v[i])
          {
              B[idx]=i;
              v[i]=true;
              magic(B,v,idx+1,combinations);
              v[i]=false;
          }
      }
      return ;
}
int main() {
    int t;
    cin>>t;
    vector<vector<int>>combinations;
    int B[9];
    bool v[10]={false};
    magic(B,v,0,combinations);
    while(t--)
    {
        int A[9];
        for(int i=0;i<9;i++)
        cin>>A[i];
        int min_cost=INT_MAX;
        for(auto &it:combinations)
        {
            int cost=calcost(it.data(),A);
            min_cost=min(min_cost,cost);
        }
        cout<<min_cost<<endl; 
    }
    return 0;
}