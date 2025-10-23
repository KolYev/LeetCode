#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int min_result;
        int max_result = 0;
        if (s.empty()) return 0;
        if (s.length() == 1) return 1;
        for (int i = 0; i < s.size(); i++)
        {
            min_result = 0;
            for (int j = i; j < s.size(); j++)
            {
                bool dublicate = false;

                for (int k = i; k < j; k++)
                {
                    if (s[k] == s[j]) {
                        dublicate = true;
                        break;
                    }
                }

                if (dublicate)
                {
                    break;
                }

                min_result++;
                if (min_result>max_result)
                {
                    max_result = min_result;
                }
            }
            
        }
        cout<< max_result;
        return max_result;
    }
};

int main() {
    Solution solution;
    solution.lengthOfLongestSubstring("abcabcbb");
    return 0;
}