/*
INSERTION SORT
=>Number of swapping is less in insertion sort.
=>Number of comparision is less in insertion sort.
=>It is also called online algorithm.
=> we alwys compare the new data to the recently added data
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,7,9,5};
    int sorted,tmp;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        sorted=i;
        while(sorted>0 &&  arr[sorted]<arr[sorted-1]){
            tmp=arr[sorted];
            arr[sorted]=arr[sorted-1];
            arr[sorted-1]=tmp;
            sorted--;
        }
    }
    cout<<"insertion sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<'\t';
    }
}