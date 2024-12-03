#include <iostream>
#include <string>
using namespace std;

string changeCase(const string& str) {
    string result;
    for (char ch : str) {
        if (isupper(ch)) {
            result += tolower(ch);
        } else if (islower(ch)) {
            result += toupper(ch);
        } else {
            result += ch;
        }
    }
    return result;
}

int main() {
    string str = "Pythpn";
    string result = changeCase(str);
    cout << "Sample Output: " << result << endl;
    return 0;
}
