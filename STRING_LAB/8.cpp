#include <iostream>
#include <string>
using namespace std;

int countWords(const string& str) {
    int wordCount = 0;
    bool inWord = false;

    for (char ch : str) {
        if (ch != ' ' && !inWord) {
            inWord = true;
            wordCount++;
        } else if (ch == ' ') {
            inWord = false;
        }
    }

    return wordCount;
}

int main() {
    string str = "DSA";
    int words = countWords(str);

    cout << "Number of words -> " << words << endl;

    return 0;
}
