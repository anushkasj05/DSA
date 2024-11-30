#include<iostream>
#include<tuple>
#include<vector>
#include<forward_list>
using namespace std;
int main(){
    forward_list<int>list1{12,5,19,9};
    forward_list<int>list2{1,2,3,4,5,12};
    for(auto p:list1){
        cout<<p<<" ";
    }
    cout<<endl;
    list1.push_front(10);
    list1.push_front(20);
    list1.pop_front();
    for(auto p:list1){
        cout<<p<<" ";
    }
    cout<<endl;
    list1.sort();
    list1.unique();
    for(auto p:list1){
        cout<<p<<" ";
    }
}