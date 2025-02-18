#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* prev;
    Node(int data_){
        data=data_;
        next=NULL;
        prev=NULL;
    }
};
void moveend(Node*&head,Node*&tail,Node*node){
    if(tail==node)
    {
        return ;
    }
    if(node->prev) 
    {
    node->prev->next=node->next; 
    }
    if(node->next) 
    {
        node->next->prev=node->prev;
    }
    if(node==head) 
    {
        head=node->next;
    }
    node->next=NULL;
    node->prev=tail;
    if(tail) 
    {
        tail->next=node;
    }
    tail=node;
}
void del(Node*&head,Node*&tail,unordered_map<int,Node*>&mp){
    if(!head) 
    {
        return ;
    }
    int d=head->data;

    if(head->next)
    {
        head=head->next;
        head->prev=NULL;
    }
    else
    {
        head=tail=NULL;
    }
    mp.erase(d);
}
void addend(Node*&head,Node*&tail,Node*&newNode){
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
    }
    else
    {
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
    }
}
int main() {
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        unordered_map<int,Node*>mp;
        Node* head=NULL;
        Node* tail=NULL;
        for(int i=0;i<n;i++){
            if(mp.find(v[i])!=mp.end()){
                moveend(head,tail,mp[v[i]]);
            }else{
                if(mp.size()==k){
                    del(head,tail,mp);
                }
                Node* newNode=new Node(v[i]);
                addend(head,tail,newNode);
                mp[v[i]]=newNode;
            }
        }
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
    return 0;
}