#include <iostream>
#include <vector>
#include <algorithm>

/* 
############ LEETCODE DATASTRUCTURES QUESTION 1 ################# 

Done in O(n) time and constant space

Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.
*/

bool containsDuplicate(std::vector<int>& nums);

int main() {
    std::vector<int> nums {1,3,5,2,6,7,0};

    bool truthVal = containsDuplicate(nums);

    std::cout << truthVal << std::endl;

}

bool containsDuplicate(std::vector<int>& nums) {
    std::sort(nums.begin(), nums.end());
    for(int i = 0; i < nums.size()-1; i++) {
        if (nums[i] == nums[i + 1])
            return true;
    }
    
    return false;
}