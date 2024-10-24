#include<vector>
#include<bits/stdc++.h>
using namespace std;

class Solution {
 public:
  // Function to find two indices of numbers in the vector 'nums' that add up to the 'target'
  vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> v;  // Vector to store the result (indices of two numbers)
    
    // Loop through each element in 'nums'
    for (int i =0;i<nums.size();i++) {
      
      // Loop through elements after 'i' to avoid repeating pairs
      for (int j =i+1;j<nums.size();j++) {
        // Check if the sum of nums[i] and nums[j] equals the target
        if (nums[i] + nums[j] == target) {
          // If condition is met, store their indices in the result vector
          v.push_back(i);
          v.push_back(j);
        }
      }
    }  
    // Return the vector containing the indices of the two numbers
    return v;
  }
};