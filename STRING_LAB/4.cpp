#include <iostream>
#include <vector>
using namespace std;

int largestSumContiguousSubarray(const vector<int>& arr) {
    int current_sum = arr[0];
    int max_sum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        current_sum = max(arr[i], current_sum + arr[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}

int main() {
    vector<int> arr1 = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << largestSumContiguousSubarray(arr1) << endl;

    vector<int> arr2 = {2};
    cout << largestSumContiguousSubarray(arr2) << endl;

    vector<int> arr3 = {5, 4, 1, 7, 8};
    cout << largestSumContiguousSubarray(arr3) << endl;

    return 0;
}
