#include<iostream>
using namespace std;
#include<string>
int main(){
    string c;
    cout<<"memory of string="<<sizeof(c)<<"\n";
    cout<<"Enter ur name\n";
    getline(cin,c);
    cout<<"ur name is "<<c<<"\n";
    c.push_back('D');
    cout<<"ur name is "<<c<<"\n";
    c.pop_back();
    cout<<"now string="<<c;
}