#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool comp(int a, int b) {
    return a>b;
}

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> nums = nums1;
        nums.insert(nums.end(), nums2.begin(), nums2.end());
        stable_sort(nums.begin(), nums.end());
        double median;
        int middle, middle1, middle2;
        if (nums.size() % 2 != 0)
        {
            middle = nums.size() / 2;
            median = nums[middle];
            cout<<median<<endl;
        } else{
            middle1 = nums.size() / 2;
            middle2 = nums.size() / 2 - 1;
            median = (double)(nums[middle1] + nums[middle2]) / 2;
            cout<<median<<endl;
        }
        

        return median;
        
        
    }
};

int main() {
    Solution solution;
    vector<int> nums1 = {1,2};
    vector<int> nums2 = {3, 4};
    solution.findMedianSortedArrays(nums1, nums2);
}