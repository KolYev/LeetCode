#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        string longest_palindrom;

        int maxLength = 1;
        int start = 0;
        for (int i = 0; i < s.size(); i++)
        {
            int right = i, left = i;
            while (left >= 0 && right < s.size() && s[left] == s[right])
            {
                if (right - left + 1 > maxLength)
                {
                    start = left;
                    maxLength = right - left + 1;
                }
                left--;
                right++;
                
            }
            left = i;
            right = i + 1;
            while (left >= 0 && right < s.size() && s[left] == s[right]) {
            if (right - left + 1 > maxLength) {
                start = left;
                maxLength = right - left + 1;
            }
            left--;
            right++;
        }
            
        }
        
        
        return s.substr(start, maxLength);
    }
};

int main() {
    Solution solution;
    solution.longestPalindrome("cbbd");
}