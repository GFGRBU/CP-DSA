#include <vector>
#include <bits/stdc++.h>  // Includes all standard library headers (use only necessary headers in practice)
using namespace std;

class Solution {
public:
    int reverse(int x) {
        // Initialize a variable to store the reversed number
        long long reverse = 0;  // Use long long to handle potential overflow

        // Continue until all digits of the number have been processed
        while(x!=0) {
            // Extract the last digit of the number
            int temp =x%10;
            
            // Remove the last digit from the original number
            x/=10;
            
            // Append the extracted digit to the reversed number
            reverse=reverse*10+temp;
        }
        
        // Check if the reversed number is within the valid range of a 32-bit signed integer
        if(reverse>INT_MAX||reverse<INT_MIN)
            return 0;  // Return 0 if the reversed number overflows
        
        // Return the reversed number, type-casted to int (since it's in the valid range)
        return static_cast<int>(reverse);
    }
};
