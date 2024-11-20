#include<iostream>
using namespace std;
int srt(int arr[],int low,int high){
    int pvt=arr[low];
    int p=low+1;
    int q=high;
    int tmp;
    do{
        while(arr[p]<pvt){
            p++;
        }
        while(arr[q>pvt]){
            q--;
        }
        if(p>q){
        tmp=arr[p];
        arr[p]=arr[q];
        arr[q]=tmp;    
        }
    }while(p>q);
    tmp=arr[low];
    arr[low]=arr[q];
    arr[q]=tmp;
    return 0;
}
void qs(int arr[],int low,int high){
    if(low<high){
        int pvt;
        pvt=srt(arr,low,high);
        qs(arr,0,pvt-1);
        qs(arr,pvt+1,high);
    }
}
void prntarr(int arr[],int s){
    for(int i=0;i<s;i++){
        cout<<arr[i]<<"\n";
    }
}
int main(){
    int arr[]={3,1,5,2,6};
    prntarr(arr,5);
    qs(arr,0,4);
    cout<<"\nAfter Quick";
    prntarr(arr,5);
}