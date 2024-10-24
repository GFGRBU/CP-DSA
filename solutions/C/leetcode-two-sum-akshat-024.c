/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include<stdio.h>
#include<stdlib.h>
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    int* arr = (int*)malloc(2 * sizeof(int)); // Allocate Memory
    *returnSize = 0; // Initialize returnSize to 0, indicating no solution found yet

    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) { // Check if the sum of the two elements equals the target
                arr[0] = i; 
                arr[1] = j; 
                *returnSize = 2; // Set returnSize to indicate that two indices are returne
                return arr; 
            }
        }
    }

    free(arr); 
    *returnSize = 0; //Set returnSize to 0 to indicate no valid pairs were found
    return NULL; 
}