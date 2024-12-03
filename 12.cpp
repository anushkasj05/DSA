#include <iostream>
#include <string>
using namespace std;

string insertDashesBetweenOdds(const string& str) {
    string result;
    for (int i = 0; i < str.length(); i++) {
        result += str[i];
        if (i < str.length() - 1) {
            if ((str[i] - '0') % 2 != 0 && (str[i + 1] - '0') % 2 != 0) {
                result += '-';
            }
        }
    }
    return result;
}

int main() {
    string str = "1345789";
    string result = insertDashesBetweenOdds(str);
    cout << "Result -> " << result << endl;
    return 0;
}
