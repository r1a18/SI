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
        right=nullptr;
        left=nullptr;
    }
};
int pos;
Node* tree(int pre[],int inord[],int lo,int hi)
{
    if(hi<lo)
    return nullptr;
    int idx;
    for(int i=lo;i<=hi;i++)
    {
        if(inord[i]==pre[pos])
        idx=i;
    }
    Node* root=new Node(inord[idx]);
    pos++;
    root->left=tree(pre,inord,lo,idx-1);
    root->right=tree(pre,inord,idx+1,hi);
    return root;
}
void postorder(Node* root)
{
    if(root==nullptr)
    return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int pre[n];
        int inord[n];
        pos=0;
        Node* root=nullptr;
        for(int i=0;i<n;i++)
        {
            cin>>pre[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>inord[i];
        }
        root=tree(pre,inord,0,n-1);
        postorder(root);
        cout<<endl;
    }
    return 0;
}