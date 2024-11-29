// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int>v{10,20};
//     v[0]=40;
//     v[1]=90;
//     v[2]=100;
//     cout<<"size="<<v.size();
//     cout<<"\ncapacity="<<v.capacity<<"\n";
//     for(auto p:v){
//         cout<<p<<" ";
//     }
// }
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    int s;
    cout<<"enter how many records\n";
    cin>>s;
    cout<<"enter"<<s<<"elements\n";
    for(int i=0;i<s;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"size="<<v.size();
    cout<<"\ncapacity="<<v.capacity()<<"\n";
    for (auto p:v){
        cout<<p<<" ";
    }
}