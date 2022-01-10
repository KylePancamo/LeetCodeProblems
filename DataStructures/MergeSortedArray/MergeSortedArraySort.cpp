#include <iostream>
#include <vector>
#include <algorithm>

// built-in sorting algo.

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);

int main() {
    std::vector<int> nums1 {1,2,3,0,0,0};
    std::vector<int> nums2 {2,5,6};

    int m = 3;
    int n = 3;

    merge(nums1, m, nums2, n);

}

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int j = 0;
    for(int i = m; i < nums1.size(); i++) {
        nums1[i] = nums2[j];
        j++;
    }

    std::sort(nums1.begin(), nums1.end());

    for(int x: nums1)
        std::cout << x << ", ";
}