class Solution {
public:
    bool isPalindrome(string s) {

        string str = "";

        // Keep only letters and digits, convert letters to lowercase
        for (char c : s) {
            if (isalnum(c)) {
                str += tolower(c);
            }
        }

        // Two pointers
        int left = 0;
        int right = str.length() - 1;

        while (left < right) {

            if (str[left] != str[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
