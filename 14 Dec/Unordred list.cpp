#include<iostream>
using namespace std;
#include<unordered_map>
int main(){
    unordered_map<string,int>up;
    up.insert({"amit",101});
    up.insert({"vivek",102});
    up.insert({"rahul",103});
    up.insert({"rohit",104});
    for(auto p:up){
        cout<<p.first<<"\t"<<p.second<<"\n";
    }
    auto p=up.find("aunty");
    if(p!=up.end()){
        cout<<p->first<<"\t"<<p->second<<"\n";
    }
    else{
        cout<<"not found\n";
    }
    up.erase("rohit");
    cout<<"after erase function"<<"\n";
    for(auto p:up){
        cout<<p.first<<"\t"<<p.second<<"\n";
    }
}