/*
tuple is a heterogeneous datatypes
the datarypes are of the column that is the nature 
*/
#include<iostream>
using namespace std;
#include<tuple>
int main(){
tuple<int,string,int>t{101,"Amit",21};
cout<<"Roll no"<<get<0>(t)<<"\n";
cout<<"Name"<<get<1>(t)<<"\t";
cout<<"Age"<<get<2>(t)<<"\n";
}