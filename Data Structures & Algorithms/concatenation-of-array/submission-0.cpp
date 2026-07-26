#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        
        // Resultant vector ka size 2 * n hoga
        vector<int> ans(2 * n);

        for (int i = 0; i < n; i++) {
            ans[i] = nums[i];       // Pehle n elements
            ans[i + n] = nums[i];   // Agle n elements (Same array concatenate)
        }

        return ans; // LeetCode automatically result print/check karega
    }
};
