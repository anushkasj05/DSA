#include <iostream>
#include <string>
using namespace std;

bool checkEgSeparatedByTwo(const string& str) {
    for (int i = 0; i < str.length() - 2; i++) {
        if (str[i] == 'e' && str[i + 2] == 'g') {
            return true;
        }
    }
    return false;
}

int main() {
    string str = "eagerer";
    
    if (checkEgSeparatedByTwo(str)) {
        cout << str << " -> 1" << endl;
    } else {
        cout << str << " -> 0" << endl;
    }

    return 0;
}
