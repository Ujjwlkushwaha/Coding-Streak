#include <iostream>
#include <vector>

using namespace std;

void removeLeadingZeros(vector<int>& arr) {
    int index = 0;

    // Find the first non-zero element
    while (index < arr.size() && arr[index] == 0) {
        index++;
    }

    // Erase the leading zeros
    arr.erase(arr.begin(), arr.begin() + index);
}

void printArray(const vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {0, 0, 0, 1, 2, 0, 3, 4};
    
    cout << "Original array: ";
    printArray(arr);

    removeLeadingZeros(arr);
    
    cout << "Array after removing leading zeros: ";
    printArray(arr);

    return 0;
}
