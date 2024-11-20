/*
it is called a generalised format of function and class 
there are two types of template 
-> Function template
-> Class template
*/
#include<iostream>
using namespace std;
template<typename a,typename b>
a grt(a a1,b b1){
    if(a1>b1){
        return a1;
    }
    else{
        return b1;
    }
}
int main(){
    cout<<grt(12.5,5.12)<<endl;
}