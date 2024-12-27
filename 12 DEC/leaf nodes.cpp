// leaf node
#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *left;
    node *right;

    node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void count(node *n,int &c) {
    if (n == NULL) {
        return;
    }
    count(n->left,c);
    count(n->right,c);
    if (n->left == NULL && n->right == NULL) {
        c++;
    }
    
}

int main() {
    int c=0;
    node *n = new node(10);
    n->left = new node(2);
    n->left->right = new node(5);
    n->left->right->left = new node(7);
    n->left->right->right = new node(6);
    n->right=new node(8);
    count(n,c);
    cout << "Total number of leaf nodes in the tree: " << c ;

    return 0;
}
