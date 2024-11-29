#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;//{10,20,7};
    cout<<"total length of vector="<<v.size()<<"\n";
    cout<<"max value of vector="<<v.max_size()<<"\n";
    // range function =for each loop
    // auto is a dynamic pointer
    // it is only done to display the data and not for insertion or for deletion
    for(auto a:v){
        cout<<a<<"\n";
    }
}