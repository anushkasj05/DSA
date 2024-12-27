#include<iostream>
using namespace std;
class node{
    public:int data;
    class node *l;
    class node *r;
    public:node(int a){
        data=a;
        l=NULL;
        r=NULL;
    }
};
int main(){
    node *root=new node(10);
    root->l=new node(12);
    root->r=new node(5);
    cout<<"PREORDER tree="<<root->data<<"->"<<root->l->data<<"->"<<root->r->data<<"\n";
    cout<<"INORDER tree="<<root->l->data<<"->"<<root->data<<"->"<<root->r->data<<"\n";
    cout<<"POSTORDER tree="<<root->l->data<<"->"<<root->r->data<<"->"<<root->data<<"\n";
}