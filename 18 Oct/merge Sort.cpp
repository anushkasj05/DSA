/*
bade problem ko sort krne keliye merge sort hota hai 
divide and conqiuer is follow
mid value divdes equally
time complexity :-order of n log
extra array is used
space complexity :- 
faster but memory is allopcated more
*/
#include<iostream>
using namespace std;
void conquer(int arr[],int low,int mid,int high)
{
    int bk[6],k=low;
    int i=low;
    int j=mid+1;
    while(i<=mid && j<=high){
        if(arr[i]<arr[j]){
            bk[k]=arr[i];
            i++;
        }
    }
}