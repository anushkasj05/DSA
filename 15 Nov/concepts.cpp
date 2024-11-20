// #include<iostream>
// using namespace std;
// int maxs(int a,int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// int main(){
//     cout<<maxs(5.12,12.5);
// }
// #include<iostream>
// using namespace std;
// int maxs(int a,int b){
//     if(a>b){
//         return a;
//     }
//     else{
//         return b;
//     }
// }
// float maxs(float a,float b){
//     if(a>b){
//         return a+1;
//     }
//     else{
//         return b+1;
//     }
// }
// int main(){
//     cout<<maxs(5.12,12.5);
// }
#include<iostream>
using namespace std;
int maxs(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
double maxs(double a,double b){
    if(a>b){
        return a+1;
    }
    else{
        return b+1;
    }
}
int main(){
    cout<<maxs(5.12,12.5);
}