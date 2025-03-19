#include<stdio.h>
class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int i = 0; // Pointer for valid elements
            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] != val) {
                    nums[i] = nums[j]; // Overwrite value
                    i++;  // Move pointer
                }
            }
            return i; // `i`  represents the number of valid elements
        }
    };
    