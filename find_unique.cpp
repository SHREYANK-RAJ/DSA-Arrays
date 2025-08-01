#include <iostream>
#include <unordered_map>
using namespace std;

/*
  Find the element that appears exactly once; others repeat.
  I count frequency and then scan again to get the unique.
*/
int findUnique(int arr[], int n) {
    unordered_map<int, int> frequency;
    for (int i = 0; i < n; ++i) frequency[arr[i]]++;

    for (int i = 0; i < n; ++i) {
        if (frequency[arr[i]] == 1)
            return arr[i];
    }
    return -1; // if none exists
}

int main() {
    int n;
    cout << "Number of elements: ";
    cin >> n;
    int arr[100];
    cout << "Enter elements (one should be unique):\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int uniqueVal = findUnique(arr, n);
    if (uniqueVal != -1)
        cout << "Unique element is: " << uniqueVal << endl;
    else
        cout << "No unique element found\n";
    return 0;
}
