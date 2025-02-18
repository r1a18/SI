#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
    data=val;
    left=nullptr;
    right=nullptr;
    }
};
void trav(Node* root,vector<int>& res)
{
    if(root==nullptr)
    return;
    res.push_back(root->data);
    trav(root->left,res);
    trav(root->right,res);
}
vector<int> trim(Node*root,int a,int b)
{
    vector<int>trimmed;
    vector<int>ans;
    trav(root,ans);
    for(int i=0;i<ans.size();i++)
    {
        if((ans[i]>=a)&&(ans[i]<=b))
        {
            trimmed.push_back(ans[i]);
        }
    }
    return trimmed;
}
Node* insert(Node* root,int val)
{
    if(root==nullptr)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left=insert(root->left,val);
    }
    else
    {
        root->right=insert(root->right,val);
    }
    return root;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a,b;
        cin>>a>>b;
        int arr[n];
        Node* root=nullptr;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            root=insert(root,arr[i]);
        }
        vector<int>ans=trim(root,a,b);
        Node* root1=nullptr;
        for(int i=0;i<ans.size();i++)
        {
            root1=insert(root1,ans[i]);
        }
        vector<int>fres;
        trav(root1,fres);
        for(int i=0;i<fres.size();i++)
        {
            cout<<fres[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}