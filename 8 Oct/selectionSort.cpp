/*
it is slower than bubble sort.
it takes more time to compare the values and the time complexity in average case,worst caseas well as in the best case is always order of n^2.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={2,1,7,9,5};
    int chotu;
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        chotu=i;
        for(int j=i+1;j<n;j++){
            if(arr[chotu]>arr[j]){
                chotu=j;
            }
        }
        if(chotu!=i){
            int temp=arr[chotu];
            arr[chotu]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
}