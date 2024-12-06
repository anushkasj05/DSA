#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str = "python";
    string result;

    // Extract only alphabetic characters
    for (char ch : str) {
        if (isalpha(ch)) {
            result += ch;
        }
    }

    // Sort the alphabetic characters
    sort(result.begin(), result.end());

    cout << result << endl;

    return 0;
}
