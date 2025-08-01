#include <iostream>
#include <unordered_set>
using namespace std;

/*
  Identify and print duplicate values in the array.
  I keep track of seen numbers and collect ones that repeat.
*/
void printDuplicates(int arr[], int n) {
    unordered_set<int> seen;
    unordered_set<int> duplicates;
    for (int i = 0; i < n; ++i) {
        if (seen.count(arr[i])) {
            duplicates.insert(arr[i]);
        } else {
            seen.insert(arr[i]);
        }
    }

    if (duplicates.empty()) {
        cout << "No duplicates found.\n";
    } else {
        cout << "Duplicates: ";
        for (int val : duplicates) cout << val << " ";
        cout << endl;
    }
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[100];
    cout << "Enter array elements:\n";
    for (int i = 0; i < size; ++i) cin >> arr[i];

    printDuplicates(arr, size);
    return 0;
}
