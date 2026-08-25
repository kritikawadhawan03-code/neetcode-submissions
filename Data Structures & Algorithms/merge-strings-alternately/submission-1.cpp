class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;
        int i = 0;

        // Add characters alternately
        while (i < word1.length() && i < word2.length()) {
            ans += word1[i];
            ans += word2[i];
            i++;
        }

        // Add remaining characters of word1
        while (i < word1.length()) {
            ans += word1[i];
            i++;
        }

        // Add remaining characters of word2
        while (i < word2.length()) {
            ans += word2[i];
            i++;
        }

        return ans;
    }
};