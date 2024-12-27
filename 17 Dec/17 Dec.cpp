// display the index of map 
#include<iostream>
#include<map>
#include<vector>
using namespace std;
void pairsum(vector<int>&v,int t){
    int n,k;
    map<int,int>mp;
    for(int i=0;i<v.size();i++){
        n=v[i];
        k=t-n;
        if(mp.find(k)!=mp.end()){
            cout<<mp[k]<<" "<<i<<endl;
        }
        mp[n]=i;
    }
}
int main(){
    vector<int>v{1,2,6,12,8};
    int target=14;
    pairsum(v,target);
}