#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5,9);
    const vector<string>k(5,"blank");
    /*v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);*/ /*push back just increases the size of the veactor*/
    // to add the values we use the fdollowing
    /*v[0]=10;
    v[1]=20;
    v[2]=30;
    v[3]=120;
    v[4]=50;*/
    for(auto p:k){
        cout<<p<<"\t";
    }
    for(auto p:v){
        cout<<p<<"\t";
    }
    cout<<v.size()<<"\n";
}