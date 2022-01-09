#include <iostream>
#include <vector>
#include <unordered_map>

/* 
############ LEETCODE DATASTRUCTURES QUESTION 3 ################# 

Done in O(n) time using HashMap

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
    std::unordered_map<int, int> twoSumMap;
    int indice;
    
    for(int i = 0; i < nums.size(); i++) 
    {
        int diff = target-nums[i]; 
        if (twoSumMap.find(target-nums[i]) != twoSumMap.end()) 
        {
            return {twoSumMap.find(target-nums[i])->second, i};
        }
        twoSumMap[nums[i]] = i;
    }
    return {0, 0};
}