#include <iostream>
#include <vector>
#include <algorithm>

// This is my implementation of the Dutch National Flag problem for sorting 0s, 1s, and 2s.
// The whole array is divided into three sections:
// 1. Zeros section (from start up to `low`)
// 2. Ones section (from `low` up to `mid`)
// 3. Unknown section (from `mid` up to `high`)
// 4. Twos section (from `high` to the end)
// My goal is to shrink the 'unknown' section.
void dutchFlagSort(std::vector<int>& nums) {
    int low = 0;
    int mid = 0;
    int high = nums.size() - 1;

    // The process continues as long as my `mid` pointer hasn't passed the `high` pointer.
    while (mid <= high) {
        // Case 1: The element at `mid` is a 0.
        if (nums[mid] == 0) {
            // A 0 belongs in the `low` section, so I swap it with whatever is at `low`.
            std::swap(nums[low], nums[mid]);
            // Now that I've placed a 0 correctly, I can advance both `low` and `mid`.
            low++;
            mid++;
        }
        // Case 2: The element at `mid` is a 1.
        else if (nums[mid] == 1) {
            // A 1 is already in the right place (the middle section), so I don't need to do anything
            // except move on to the next element.
            mid++;
        }
        // Case 3: The element at `mid` is a 2.
        else { // This means nums[mid] == 2
            // A 2 belongs at the end of the array, so I swap it with the element at `high`.
            std::swap(nums[mid], nums[high]);
            // I shrink the 'unknown' area by moving `high` one step to the left.
            // I DO NOT increment `mid` here, because the element I just swapped from `high`
            // could be a 0 or 1 and needs to be processed.
            high--;
        }
    }
}

// Helper function to display the vector contents.
void printVector(const std::vector<int>& data) {
    for (int val : data) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}


int main() {
    std::vector<int> my_nums = {0, 1, 1, 0, 2, 1, 0, 2, 1, 0};

    std::cout << "Original numbers: ";
    printVector(my_nums);

    dutchFlagSort(my_nums);

    std::cout << "Sorted numbers:   ";
    printVector(my_nums);

    return 0;
}
