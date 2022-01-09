#include <iostream>
#include <vector>
#include <algorithm>

/* 
############ LEETCODE DATASTRUCTURES QUESTION 2 ################# 

Done in O(n) time and constant space

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
*/

int maxSubArray(std::vector<int>& nums);

int main() {

    std::vector<int> nums {5,4,-1,7,8};
    int maxVal = maxSubArray(nums);

    std::cout << maxVal << std::endl;

}

int maxSubArray(std::vector<int>& nums) {
        int maxSum = nums[0];
        int curSum;
        
        for(int i = 1; i < nums.size(); i++) {
            curSum = nums[i] + nums[i-1];
            curSum = std::max(nums[i], curSum);
            nums[i] = curSum;

            if (curSum > maxSum) {
                maxSum = curSum;
            }
        }
        
        return maxSum;
}