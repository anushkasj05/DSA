/*
STL-standard template library
template is generalised but class isn't generalised
stl is a powreful set of c++ template classes and functions that are commonly used algorithm and data structure
it is a library of container classes,algorithm's and illerators
c++ stl has following three well structured components 
=> containers
=> algorithms
=> iterators

==========CONTAINERS==========

they are used to manage ollection of objects of a certain kind
there are three types of containers
=> sequence 
=> container adaptors
=> associative containers

SEQUENCE 

it can be accessed in a sequencial manner
there are following templates inside a sequence container
=>array
=>vector
=>list
=>deque
=>forward_list

*/
#include<iostream>
using namespace std;
#include<array>
int main(){
    array<int,5>arr = {1,2,3,4,5};
    cout<<arr.size()<<"\n";
    for(int i=0;i<arr.size();i++){
        cout<<arr.at(i)<<"\t";
    }
}
