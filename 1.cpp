// PRINT THE ELEMENTS OF AN ARRAY
#include<iostream>
using namespace std;
int main()
{
    int s; //declaration of the variable to store the size of the array 
    int arr[s]; //declaration of the array to store size 's' to store the elements 
    cin>>s;//input of the size of the array from the user
    for(int i=0;i<s;i++)
    {
        cin>>arr[i]; //input of the elements of the array from the user
    }
    for(int i=0;i<s;i++)
    {
        cout<<arr[i]<<endl; //printing the elements of the array
    }
}