#include <iostream>
using namespace std;

/*
  Reverse an array in-place by swapping two pointers from ends.
  No extra array used.
*/
void reverseArray(int arr[], int length) {
    int left = 0;
    int right = length - 1;
    while (left < right) {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }
}

int main() {
    int n;
    cout << "Size of array to reverse: ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " values:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    reverseArray(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; ++i) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
