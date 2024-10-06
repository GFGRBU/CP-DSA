#include <iostream>
#include <vector>
#include <climits> // For INT_MIN
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi = INT_MIN;
        int sum = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            sum = max(nums[i], sum + nums[i]);
            maxi = max(maxi, sum);
        }
        return maxi;
    }
};

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int result = sol.maxSubArray(nums);

    cout << "The maximum subarray sum is: " << result << endl;

    return 0;
}
