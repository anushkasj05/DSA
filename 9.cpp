#include <iostream>
#include <string>
using namespace std;

bool checkEqualFrequency(const string& str) {
    int frequency[256] = {0};

    for (char ch : str) {
        frequency[ch]++;
    }

    int firstFreq = -1;

    for (int i = 0; i < 256; i++) {
        if (frequency[i] > 0) {
            if (firstFreq == -1) {
                firstFreq = frequency[i];
            } else if (frequency[i] != firstFreq) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    string str = "aabcdeef";

    if (checkEqualFrequency(str)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
