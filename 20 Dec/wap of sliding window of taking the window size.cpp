#include<iostream>
using namespace std;
#include<vector>
int mxsub(vector<int>&v){
    int currentsum=0;
    int mx=v[0];
    for(int i=1;i<v.size();i++){
        currentsum=currentsum+v[i];
        if(currentsum>mx){
            mx=currentsum;
        }
        if(currentsum<0){
            currentsum=0;
        }
    }           
    return mx;
}
int main(){
    vector<int> v{5,2,-1,4,2,3};  
        cout<<mxsub(v)<<endl;
        return 0;
        }