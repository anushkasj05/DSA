/* 
namespace is a collection of identifiers 
in namescpace class can be made but in class namespace cannot be made
it also removes the ambiguity also
namespace can be made within the namespace
#include<iostream> -> content place holder 
by default public specifier 
*/
#include<iostream>
using namespace std;
namespace cybrom{
    int age=21;
    void show(){
        cout<<"\nExample of namespace\n";
    }
}
int main(){
    cout<<cybrom::age<<"\n";
    cybrom::show();
}