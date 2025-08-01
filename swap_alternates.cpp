#include <iostream>
using namespace std;

/*
  Swap every pair of adjacent elements: (0,1), (2,3), etc.
  If odd length, last stays as is.
*/
void swapAlternates(int arr[], int n) {
    for (int i = 0; i + 1 < n; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main() {
    int size;
    cout << "Enter number of elements: ";
    cin >> size;
    int arr[100];
    cout << "Enter values:\n";
    for (int i = 0; i < size; ++i) cin >> arr[i];

    swapAlternates(arr, size);
    cout << "After swapping alternates: ";
    for (int i = 0; i < size; ++i) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
