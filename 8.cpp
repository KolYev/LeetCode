#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Solution {
public:
    int myAtoi(string s) {
        stringstream ss(s);
        int result = 0;
        ss>>result;
        return result;
    }
};

int main() {
    Solution solution;
    cout<<solution.myAtoi("words and 987")<<endl;
}