#include <iostream>
#include <vector>

/* 
############ LEETCODE DATASTRUCTURES QUESTION 3 ################# 

Done in O(n^2) time

Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.
*/

std::vector<int> twoSum(std::vector<int>& nums, int target);

int main() 
{
    std::vector<int> nums {-1,-2,-3,-4,-5};
    std::vector<int> indices;

    indices = twoSum(nums, -8);

    std::cout << indices[0] << indices[1] << std::endl;
}

std::vector<int> twoSum(std::vector<int>& nums, int target) 
{
    std::vector<int> indices {0,0};
    
    for(int i = 0; i < nums.size(); i++) 
    {
        for(int j = i + 1; j < nums.size(); j++) 
        {
            if (target-nums[i] == nums[j])
            {
                indices[0] = i;
                indices[1] = j;
                return indices;
            }
        }
    }
    return indices;
}