#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        // 1. Guard against empty inputs
        if (nums.empty()) return 0;
        
        // 2. Initialize the slow pointer
        int i = 0;
        
        // 3. Scan the array with the fast pointer
        for (int j = 1; j < (int)nums.size(); ++j) {
            
            // 4. If we find a new unique number
            if (nums[j] != nums[i]) {
                i++;            // Advance the unique boundary
                nums[i] = nums[j]; // Write the new unique number into place
            }
        }
        
        // 5. Return the count of unique elements
        return i + 1;
    }
};