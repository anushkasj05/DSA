#include<iostream>
#include<array>
using namespace std;
int main(){
    array<int,5>arr;
    cout<<"enter 5 values\n";
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    cout<<"output is\n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<"value at 0 indexing="<<arr.front()<<"\n";
    cout<<"value at 5 indexing="<<arr.back()<<"\n";
    // array<int,5>d {10,50,80,90,20};
    cout<<"output is\n";
    for(int i=0;i<d.size();i++){
        cout<<d[i]<<" ";
    }
    arr.swap(d);
    cout<<"after swap\n";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
        }
}