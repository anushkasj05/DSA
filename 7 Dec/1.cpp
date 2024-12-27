// wap using stack to find the min or max value without vactor
#include <iostream>
#include <stack>
// #include<vector>
using namespace std;
// int min(stack<int>s){
//     vector<int>v;
//     while(!s.empty()){
//         v.push_back(s.top());
//         s.pop();
//     }
//     int min = v[0];
//     for(int i=1;i<v.size();i++){
//         if(v[i]<min){
//             min = v[i];
//         }
//     }
//     return min;
// }
// int max(stack<int>s){
//     vector<int>v;
//     while(!s.empty()){
//         v.push_back(s.top());
//         s.pop();
//     }
//     int max = v[0];
//     for(int i=1;i<v.size();i++){
//         if(v[i]>max){
//             max = v[i];
//         }
//     }
//     return max;
// }
// int main(){
//     stack<int>s;
//     s.push(5);
//     s.push(12);
//     s.push(10);
//     cout<<"Min value is "<<min(s)<<endl;
//     cout<<"Max value is "<<max(s)<<endl;
//     return 0;
// }
#include <iostream>
#include <stack>
using namespace std;
int min(stack<int>s){
    int min = s.top();
    while(!s.empty()){
        if(s.top()<min){
            min = s.top();
        }
        s.pop();
    }
    return min;
}
int max(stack<int>s){
    int max = s.top();
    while(!s.empty()){
        if(s.top()>max){
            max = s.top();
        }
        s.pop();
    }
    return max;
}
int main(){
    stack<int>s;
    s.push(5);
    s.push(12);
    s.push(10);
    cout<<"Min value is "<<min(s)<<endl;
    cout<<"Max value is "<<max(s)<<endl;
}