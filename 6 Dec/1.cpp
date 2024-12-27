#include<iostream>
using namespace std;
#include<stack>
bool bal(string &s,int n){
    stack<char>st;
    bool ans=true;
    for(int i=0;i<n;i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }
        else if(s[i]=='}'){
            if(!st.empty() && st.top()=='{'){
                st.pop();
        }
        else{
            ans=false;
            break;
        }
        }
        else if(s[i]==')'){
            if(!st.empty() && st.top()=='('){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
        else if(s[i]==']'){
            if(!st.empty() && st.top()=='['){
                st.pop();
            }
            else{
                ans=false;
                break;
            }
        }
    }
    return ans;
}
int main(){
    string s="[}";
    bool k=bal(s,s.length());
    if(k){
        cout<<"yes";
    }
    else{
        
    }
}