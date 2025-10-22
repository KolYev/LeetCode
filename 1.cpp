#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int el = size(nums);
        int difference;
        vector<int> result;
        for (int i = 0; i < el; i++)
        {
            difference = target - nums[i];
            for (int j = i+1; j < el; j++)
            {
                if (difference == nums[j]) {
                    result = { i, j };
                    break;
                }
            }
        }
        return result;
    }
};