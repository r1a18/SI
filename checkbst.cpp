#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val)
    {
        data=val;
        left=nullptr;
        right=nullptr;
    }
};
Node* insert(Node* root,int i,vector<int>&arr)
{
    if(i>=arr.size())
    return nullptr;
    Node* nn=new Node(arr[i]);
    nn->left=insert(nn->left,2*i,arr);
    nn->right=insert(nn->right,2*i+1,arr);
    return nn;
}
void trav(Node*root,vector<int>&ans)
{
    if(root==NULL)return;
    trav(root->left,ans);
    ans.push_back(root->data);
    trav(root->right,ans);
}
bool checkbst(Node*root)
{
    vector<int>ans;
    trav(root,ans);
    set<int>s(ans.begin(),ans.end());
    if(s.size()!=ans.size())
    {
        return false;
    }
    for(int i=0;i<ans.size()-1;i++)
    {
        if(ans[i+1]<=ans[i]) return false;
    }
    return true;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>arr(n+1);
        for(int i=1;i<=n;i++)
        {
            cin>>arr[i];
        }
        Node* root=insert(nullptr,1,arr);
        if(checkbst(root))
        {
            cout<<"True"<<'\n';
        }
        else
        {
            cout<<"False"<<'\n';
        }
    }
}