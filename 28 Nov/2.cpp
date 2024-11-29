/* pair is a class template which is having two parameters and we can insert the value with the help of make_pair() 
we can access the first element by using first keyword along with the object name and the second element will be accessed by second keyword along with the object  */
#include<iostream>
using namespace std;
#include<string>
#include<vector>
int main(){
    // pair<int,string>p;
    // p=make_pair(110,"Ravi");
//     cout<<p.first<<endl;
//     cout<<p.second<<endl;
    vector<pair<int,string> >v;
    int t;
    int rollno;
    string name;
    cout<<"Enter thr number of records";
    cin>>t;
    for(int i=1;i<=t-1;i++){
        cout<<"Enter the rollno ";
        cin>>rollno;
        cout<<"Enter the name ";
        cin>>name;
        v.push_back(make_pair(rollno,name));
        }
        for(int i=0;i<v.size();i++){
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
}