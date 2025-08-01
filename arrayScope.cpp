#include <iostream>
using namespace std;

/*
  Demonstrates difference between local and static arrays inside a function.
  Static array keeps its value across calls; local array resets each time.
*/
void showScope() {
    static int persistentArr[3] = {10, 20, 30}; // stays in memory between calls
    int temporaryArr[3] = {1, 2, 3}; // recreated on every call

    cout << "Persistent (static) first value: " << persistentArr[0] << endl;
    cout << "Temporary (local) first value: " << temporaryArr[0] << endl;

    // Change static array to prove persistence
    persistentArr[0] += 5;
}

int main() {
    cout << "First call:\n";
    showScope();
    cout << "\nSecond call:\n";
    showScope();
    return 0;
}
