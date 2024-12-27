#include<iostream>
using  namespace std;
#include<vector>
void maxsum(vector<int>&v,int w){
    int sum=0;
    for(int i=0;i<w;i++) sum=sum+v[i];
    cout << sum << "\n";
    int k=w;
    int x=0;
    int mx=0;
    while(k<v.size()){
        sum=sum-v[x];
        sum=sum+v[k];
        cout << sum << "\n";
        mx=sum>mx?sum:mx;
        x++;
        k++;
    }
    //return mx;
}
int main(){
    vector<int> v{2,1,4,-1,3,7};
    int w=2;
    maxsum(v,w);
    return 0;
}