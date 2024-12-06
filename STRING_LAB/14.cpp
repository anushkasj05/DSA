#include <iostream>
#include <string>
using namespace std;

int sumOfNumbersInString(const string& str) {
    int sum = 0;
    int num = 0;
    bool isNumber = false;

    for (char ch : str) {
        if (isdigit(ch)) {
            num = num * 10 + (ch - '0');
            isNumber = true;
        } else {
            if (isNumber) {
                sum += num;
                num = 0;
                isNumber = false;
            }
        }
    }
    if (isNumber) {
        sum += num;
    }

    return sum;
}

int main() {
    string str = "Cy3brom from 2008";
    int sum = sumOfNumbersInString(str);
    cout << "Sum of the numbers: " << sum << endl;
    return 0;
}
