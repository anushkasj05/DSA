/*
set->graph
map->__cpp_threadsafe_static_init
*/
#include<iostream>
#include<set>
using namespace std;
int main(){
    set<string>s;
    s.insert("Divyansh");
    s.insert("Shivani");
    s.insert("Chaubey");
    s.insert("Anushka");
    for(auto p:s){
        cout<<p<<"\n";
    }
    s.erase("Anushka");
    cout<<"After erase function\n";
    for(auto p:s){
        cout<<p<<"\n";
        }
        auto k=s.find("Shivani");
        if(k!=s.end()){
            cout<<*k;
        }
        else{
            cout<<"Not found";
        }
}