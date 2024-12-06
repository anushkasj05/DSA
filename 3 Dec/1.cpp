#include<iostream>
using namespace std;
#include<stack>
int main(){
    stack<int> s;
    s.push(5);
    s.push(12);
    s.push(10);
    // s.pop();
    // s.pop();
    // s.pop();
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }    
    else{
        cout<<"Stack is not empty"<<endl;
    }
}