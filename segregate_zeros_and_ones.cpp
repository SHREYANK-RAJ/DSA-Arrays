#include <iostream>
#include <vector>
#include <algorithm>

// This is my function to sort the 0s and 1s.
// The main idea is to use two pointers, one at the start and one at the end,
// and have them move towards each other.
void segregate01(std::vector<int>& nums) {
    int left = 0;
    int right = nums.size() - 1;

    // I'll keep looping as long as the left pointer is behind the right one.
    while (left < right) {
        // First, I'll find the first '1' from the left side.
        // If I find a '0', I'll just skip over it because it's already in the right place.
        while (nums[left] == 0 && left < right) {
            left++;
        }

        // Next, I'll find the first '0' from the right side.
        // I'll skip any '1's because they are where they belong.
        while (nums[right] == 1 && left < right) {
            right--;
        }

        // Now, if my pointers haven't crossed, it means `left` is pointing at a `1`
        // and `right` is pointing at a `0`. This is the pair I need to swap.
        if (left < right) {
            std::swap(nums[left], nums[right]);
            // After swapping, I can move both pointers inward.
            left++;
            right--;
        }
    }
}

// A simple helper function to print the vector.
void printVector(const std::vector<int>& data) {
    for (int val : data) {
        std::cout << val << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> my_data = {1, 0, 0, 1, 1, 1, 0, 1};

    std::cout << "Data before sorting: ";
    printVector(my_data);

    segregate01(my_data);

    std::cout << "Data after sorting:  ";
    printVector(my_data);

    return 0;
}
