#include<iostream>
using namespace std;
int main(){
    int n;
    bool flag=false;
    int arr[]={8,2,1,9,80,2};
    int s=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<"\nEnter thr number to be found"<<"\n";
    cin>>n;
    for(int i=0;i<s;i++){
        if(arr[i]==n){
            // cout<<"Number found at index "<<i;
            flag=true;
            return 0;
        }
    }
    // cout<<"Number not found";
    if(flag==true){
        cout<<"Number found";
    }
    else{
        cout<<"Number not found";
    }
    return 0;
}