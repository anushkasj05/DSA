// display reverse of string using stack
#include<iostream>
#include<stack>
using namespace std;
void reverse(string s){
    stack <char> st;
    for(int i = 0;i < s.length();i++){
        st.push(s[i]);
    }
    while(!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    reverse(s);
    return 0;
}