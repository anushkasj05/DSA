#include<iostream>
using namespace std;
template<typename c1,typename c2>
class student{
    c1 age;
    c2 salary;
    public:
    student(c1 a,c2 s){
        age=a;
        salary=s;
    }
    void show(){
        cout<<"Age is "<<age<<endl;
        cout<<"Salary is "<<salary<<endl;
    }
};
int main(){
    student<int,float> s1(21,32000.98);
    s1.show();
}