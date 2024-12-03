#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    vector<int> duplicates;
    int n = arr.size();
    
    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]) % n;
        if (arr[index] < 0) duplicates.push_back(index);
        else arr[index] = -arr[index];
    }
    
    return duplicates;
}

int main() {
    vector<int> array = {1, 2, 3, 6, 3, 6, 1};
    vector<int> result = findDuplicates(array);
    for (int num : result) cout << num << " ";
    return 0;
}
