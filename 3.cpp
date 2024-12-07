// // anagram string without using sort
// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
//     string s1,s2;
//     getline(cin,s1);
//     getline(cin,s2);
//     int len1=s1.length(),len2=s2.length();
//     if(len1!=len2){
//         cout<<"not anagram"<<endl;
//     }
//     else{
//         int count[256]={0};
//         for(int i=0;i<len1;i++){
//             count[s1[i]]++;
//             count[s2[i]]--;
//         }
//         bool flag=true;
//         for(int i=0;i<256;i++){
//             if(count[i]!=0){
//                 flag=false;
//                 break;
//             }

//         }
//         if(flag){
//             cout<<"anagram"<<endl;
//         }
//         else{
//             cout<<"not anagram"<<endl;
//         }
//     }
// }
//  anagram string without using sort
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        int count[26]={0};
        for(int i=0;i<s.length();i++){
            count[s[i]]++;
            count[t[i]]--;
        }
        for(int i=0;i<26;i++){
            if(count[i]!=0){
               return false;
            }
        }
        return true;
    }
};
int main(){
    Solution s;
    string s1,s2;
    cin>>s1>>s2;
    if(s.isAnagram(s1,s2)){
        cout<<"anagram"<<endl;
    }
    else{
        cout<<"not anagram"<<endl;
    }
    return 0;
}