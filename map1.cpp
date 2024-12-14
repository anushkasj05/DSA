/*
MAP is an associative container
It displays the data in sorted order
The time complexity is logn
It is having key and value pair
Key is always unique
It implements self balance binary search tree
There are two types of map
->order map
->unordered map
greater is a comparator operator for the greatest value to be at the top
less is a comparator operator for the least value to be at the top
map is used for tree
*/
#include<iostream>
using namespace std;
#include<map>
int main(){
    map<int,string,greater<>>mp;
    mp.insert({112,"Anushka"});
    mp.insert({105,"Divyansh"});
    mp.insert({121,"Argha"});
    mp.insert({119,"Sonali"});
    mp[109]="Praveen";
    for(auto p:mp){
        cout<<p.first<<"\t"<<p.second<<"\n";
    }
    cout<"size="<<mp.size()<<"\n";
    cout<<"Max Size="<<mp.max_size()<<"\n";
    mp.clear();//to delete all the data
}