#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1) return s;

        int j = 0;
        string result;

        while (j < numRows)
        {
            for (int i = j; i < s.size(); i += 2 * (numRows -1))
            {
                result += s[i];

                if (j>0 && j < numRows - 1)
                {
                    int middle = i + 2 * (numRows - 1 - j);
                    if (middle < s.size())
                    {
                        result += s[middle];
                    }
                    
                }
                
            }
            j++;
        }
        
        
        cout<<result<<endl;
        return result;
        
    }
};

int main() {
    Solution solution;
    solution.convert("PAYPALISHIRING", 4); 
}