#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool hasPairWithSum(vector<int> arr, int x) {
    sort(arr.begin(), arr.end());
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == x) return true;
        if (sum < x) left++;
        else right--;
    }
    return false;
}

int main() {
    vector<int> arr1 = {0, -1, 2, -3, 1};
    cout << (hasPairWithSum(arr1, -2) ? "Yes" : "No") << endl;

    vector<int> arr2 = {1, -2, 1, 0, 5};
    cout << (hasPairWithSum(arr2, 0) ? "Yes" : "No") << endl;

    return 0;
}
