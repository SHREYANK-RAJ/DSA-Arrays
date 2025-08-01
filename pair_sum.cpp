#include <iostream>
#include <unordered_set>
using namespace std;

/*
  Check if any two numbers add up to target.
  I store seen values and for each element see if complement exists.
*/
bool hasPairWithSum(int arr[], int n, int targetSum) {
    unordered_set<int> seen;
    for (int i = 0; i < n; ++i) {
        int needed = targetSum - arr[i];
        if (seen.count(needed))
            return true;
        seen.insert(arr[i]);
    }
    return false;
}

int main() {
    int n;
    cout << "How many numbers: ";
    cin >> n;
    int arr[100];
    cout << "Enter the numbers:\n";
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int target;
    cout << "Enter target sum: ";
    cin >> target;

    bool exists = hasPairWithSum(arr, n, target);
    if (exists)
        cout << "Yes, a pair exists that sums to " << target << endl;
    else
        cout << "No such pair found\n";
    return 0;
}
