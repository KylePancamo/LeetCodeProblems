#include <iostream>
#include <vector>
#include <algorithm>

// O(n + m) alternative way

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n);

int main() {
    std::vector<int> nums1 {1,2,3,0,0,0};
    std::vector<int> nums2 {2,5,6};

    int m = 3;
    int n = 3;

    merge(nums1, m, nums2, n);

}

void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
    std::vector<int> nums3(n+m, 0);

    int j = 0;
    int i = 0;
    int k;

    for(k = 0; k < nums3.size(); k++) {
        if (i == m || j == n)
            break;

        if (nums1[i] < nums2[j]) {
            nums3[k] = nums1[i];
            i++;
        }
        else {
            nums3[k] = nums2[j];
            j++;
        }
    }

    while (j < n) {
        nums3[k] = nums2[j];
        k++;
        j++;
    }

    while (i < m) {
        nums3[k] = nums1[i];
        k++;
        j++;
    }

    for(int x: nums3)
        std::cout << x << ", ";
}