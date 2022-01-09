#include <iostream>
#include <vector>
#include <algorithm>

/*
############ LEETCODE DATASTRUCTURES QUESTION 2 ################# 

Done in O(n^3) time and constant space

Given an integer array nums, find the contiguous subarray (containing at least one number) which has the largest sum and return its sum.

A subarray is a contiguous part of an array.
*/

int maxSubArrayO2(std::vector<int>& nums);

int main() {

    std::vector<int> nums {-2, 1, -3, 4, 1, -3};
    int maxVal = maxSubArrayO2(nums);

    std::cout << maxVal << std::endl;

}

int maxSubArrayO2(std::vector<int>& nums) {
    // set max val to first number in array.
    int maxSum = nums[0];
    
    for(int i = 0; i < nums.size(); i++) {  
        for (int j = i; j < nums.size(); j++) {
            int curSum = 0;
            for (int k = i; k <= j; k++) {
                curSum += nums[k];
            }
            
            maxSum = std::max(maxSum, curSum);
        }
    }
    
    return maxSum;
}