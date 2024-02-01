#include <string>

class Solution {
public:
    bool isPalindrome(int x) {
   std::string str = std::to_string(x);
        int i = 0, j = str.length() - 1;

        while (i < j) {
            if (str[i] != str[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
