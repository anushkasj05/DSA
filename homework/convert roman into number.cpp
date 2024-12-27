#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void roman(const string &s) {
    unordered_map<char, int> up{
        {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, 
        {'C', 100}, {'D', 500}, {'M', 1000}
    };

    int x = 0;
    int prev = 0;

    for (int i = s.size() - 1; i >= 0; i--) {
        if (up[s[i]] < prev) {
            x= x - up[s[i]];  
        } else {
            x= x + up[s[i]]; 
        }
        prev =x; 
    }

    cout << x;
}

int main() {
    string s="XII";
    roman(s);
    return 0;
}
