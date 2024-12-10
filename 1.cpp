#include<iostream>
using namespace std;
class node{
    int data;
    class node *l;
    class node *r;
    public:node(int a){
        data=a;
        l=NULL;
        r=NULL;
    }
};