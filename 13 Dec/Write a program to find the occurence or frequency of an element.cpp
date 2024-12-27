// wap to find the occurence or frequency of an element using vector
#include<iostream>
using namespace std;
#include<map>
#include<vector>
void frequency(vector<int>v){
    map<int,int>m;
    for(int i=0;i<v.size();i++){
        m[v[i]]++;
    }
    for(auto a:m){
        cout<<a.first<<" occures "<<a.second<<" times "<<endl;
    }
}
int main(){
    vector<int>v{3,2,31,4,3,3,8,31};
    frequency(v);
}