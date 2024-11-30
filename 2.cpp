#include<iostream>
#include<tuple>
using namespace std;
#include<vector>
int main(){
    vector<tuple<int,string,int>>v1;
    int n,rno,age;
    string name;
    cout<<"Enter the number of records: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"Enter the roll number: ";
        cin>>rno;
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
        v1.push_back(make_tuple(rno,name,age));
    }
    for(int i=0;i<v1.size();i++){
        cout<<"Roll Number: "<<get<0>(v1[i])<<endl;
        cout<<"Name: "<<get<1>(v1[i])<<endl;
        cout<<"Age: "<<get<2>(v1[i])<<endl;
    }
}