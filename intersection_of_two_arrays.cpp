#include <iostream>
#include <unordered_set>
using namespace std;

/*
  Print intersection of two arrays (common elements).
  I insert first array into a set and check each from second.
*/
void printIntersection(int a[], int lenA, int b[], int lenB) {
    unordered_set<int> setA;
    for (int i = 0; i < lenA; ++i) setA.insert(a[i]);

    cout << "Common elements: ";
    bool any = false;
    for (int i = 0; i < lenB; ++i) {
        if (setA.count(b[i])) {
            cout << b[i] << " ";
            any = true;
        }
    }
    if (!any) cout << "None";
    cout << endl;
}

int main() {
    int n1, n2;
    cout << "Size of first array: ";
    cin >> n1;
    int arr1[100];
    cout << "Enter elements of first array:\n";
    for (int i = 0; i < n1; ++i) cin >> arr1[i];

    cout << "Size of second array: ";
    cin >> n2;
    int arr2[100];
    cout << "Enter elements of second array:\n";
    for (int i = 0; i < n2; ++i) cin >> arr2[i];

    printIntersection(arr1, n1, arr2, n2);
    return 0;
}
