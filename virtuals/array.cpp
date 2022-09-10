//Given an integer array nums, move all 0's to the end of it
//while maintaining the relative order of the non-zero elements.
//Note that you must do this in-place without making a copy of the array.

#include <iostream>
#include <unordered_map>

int* zeros_to_end(int* arr, int size)
{
    int num{};
    for (int i{1}; i < size; ++i) {
        int j{i - 1};
        if (arr[i] && !arr[j]) {
            num = arr[i];
            while (j >= 0 && !arr[j]) {
                arr[j + 1] = 0;
                --j;
            }
            arr[j + 1] = num;
        }
    }
    return arr;
}

int main() {
    int arr[] = {0, 0, 1, 0, 0, 2, 0, 0, 0, 12, 0, 8, 0, 7, 9, 0};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i{}; i < size; ++i) {
        std::cout << zeros_to_end(arr, size)[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}