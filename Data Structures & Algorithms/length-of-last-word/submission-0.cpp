class Solution {
public:
    int lengthOfLastWord(string s) {
        string last;

        stringstream ss(s);

        while (ss >> last) {
        }

        return last.size();
    }
};