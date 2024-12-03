#include <iostream>
#include <string>
using namespace std;

int maxRepeatedLetters(const string& word) {
    int freq[256] = {0};
    for (char ch : word) {
        freq[ch]++;
    }

    int maxFreq = 0;
    for (int i = 0; i < 256; i++) {
        maxFreq = max(maxFreq, freq[i]);
    }

    return maxFreq;
}

string findWordWithMaxRepeatedLetters(const string& str) {
    string word, result;
    int maxReps = 0;
    int start = 0;

    for (int i = 0; i <= str.length(); i++) {
        if (i == str.length() || str[i] == ' ') {
            word = str.substr(start, i - start);
            int repeatedLetters = maxRepeatedLetters(word);
            if (repeatedLetters > maxReps) {
                maxReps = repeatedLetters;
                result = word;
            }
            start = i + 1;
        }
    }

    return result;
}

int main() {
    string str = "Print a welcome text in a separate line";
    string word = findWordWithMaxRepeatedLetters(str);

    cout << "Word which has the highest number of repeated letters: " << word << endl;

    return 0;
}
