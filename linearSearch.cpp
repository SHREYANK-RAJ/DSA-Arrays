#include <iostream>
using namespace std;

/*
  My own linear search: go through array one by one and check if target is there.
  Returns index or -1 if not found.
*/
int linearSearch(int arr[], int n, int target) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == target)
            return i; // found at position i
    }
    return -1; // not found
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[100]; // assuming max 100 for this demo
    cout << "Enter elements:\n";
    for (int i = 0; i < size; ++i) cin >> arr[i];

    int value;
    cout << "Enter value to search: ";
    cin >> value;

    int resultIndex = linearSearch(arr, size, value);
    if (resultIndex != -1)
        cout << "Value found at index " << resultIndex << endl;
    else
        cout << "Value not present in array\n";

    return 0;
}
