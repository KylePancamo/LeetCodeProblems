#include <iostream>
#include <vector>
#include <algorithm>

// O(n+m) simple way

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);

int main() {
    std::vector<int> nums1 {1,2,3,0,0,0};
    std::vector<int> nums2 {2,5,6};

    int m = 3;
    int n = 3;

    merge(nums1, m, nums2, n);

}

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    int nums1J = m;
    int nums2K = n;
    for (int i = nums1.size() - 1; i > 0; i--) {
        if (nums1[nums1J-1] >= nums2[nums2K-1]) {
            nums1[i] = nums1[nums1J-1];
            nums1J--;
        }
        else {
            nums1[i] = nums2[nums2K-1];
            nums2K--;
        }
    }

    for(int x: nums1)
        std::cout << x << ", ";
}