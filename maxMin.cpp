#include <iostream>
using namespace std;

/*
  Find maximum and minimum in array by scanning once.
  Time complexity O(n), extra space O(1).
*/
pair<int, int> getMaxAndMin(int arr[], int n) {
    int maximum = arr[0];
    int minimum = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > maximum) maximum = arr[i];
        if (arr[i] < minimum) minimum = arr[i];
    }
    return {maximum, minimum};
}

int main() {
    int n;
    cout << "How many numbers? ";
    cin >> n;
    int arr[100];
    cout << "Enter " << n << " numbers:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    auto [maxVal, minVal] = getMaxAndMin(arr, n);
    cout << "Maximum: " << maxVal << ", Minimum: " << minVal << endl;
    return 0;
}
