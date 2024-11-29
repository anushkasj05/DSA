#include<iostream>
#include<vector>
using namespace std;
void test(vector<int>vs){
    for(int i=0;i<vs.size();i++){
        if(vs[i]%2==0){
            cout<<vs[i]<<" ";
        }
    }
}
int main(){
    vector<int>vs{69,420,48,104,996};
    test(vs);

}