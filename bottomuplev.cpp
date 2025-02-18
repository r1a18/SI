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
Node* insert(Node* root,int val)
{
    if(root==NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left=insert(root->left,val);
    }
    else
    root->right=insert(root->right,val);
    return(root);
}
vector<vector<int>>level(Node* root)
{
    vector<vector<int>>res;
    if(root==NULL)return res;
    queue<Node*>q;
    q.push(root);
    while(q.size()>0)
    {
        vector<int>ls;
        int l=q.size();
        for(int i=0;i<l;i++)
        {
            Node* temp=q.front();
            q.pop();
            ls.push_back(temp->data);
            if(temp->left!=nullptr)
            q.push(temp->left);
            if(temp->right!=nullptr)
            q.push(temp->right);
        }
        res.push_back(ls);
    }
    return res;
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        Node* root=nullptr;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            root=insert(root,arr[i]);
        }
        vector<vector<int>>fres=level(root);
        for(int i=fres.size()-1;i>=0;i--)
        {
            for(int j=0;j<fres[i].size();j++)
            {
                cout<<fres[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}