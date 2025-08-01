#include <iostream>
using namespace std;

/*
  Simple introduction to arrays.
  I’m printing the contents and showing how to get the size.
*/
int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Array elements: ";
    for (int i = 0; i < length; ++i) {
        cout << numbers[i] << " ";
    }
    cout << "\nTotal elements: " << length << endl;
    return 0;
}
