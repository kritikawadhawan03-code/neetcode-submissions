class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_set<int> s;
        vector<int> ans;

        // Store nums1 in HashSet
        for (int x : nums1) {
            s.insert(x);
        }

        // Traverse nums2
        for (int x : nums2) {
            if (s.count(x)) {
                ans.push_back(x);
                s.erase(x);
            }
        }

        return ans;
    }
};