#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string x_str = to_string(x);
        int i  = 0;
        int j = x_str.size() - 1;

        while (i < j)
        {
            if (x_str[i]!= x_str[j])
            {
                return false;
            }
            i++;
            j--;
            
        }
        return true;
        
      
    }  
};

int main() {
    Solution solution;
    cout<<solution.isPalindrome(10)<<endl;
}