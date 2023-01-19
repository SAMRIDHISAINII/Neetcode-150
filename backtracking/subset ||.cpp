class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> res;
        vector<int> curr;
        sort(nums.begin(), nums.end()); 
        // sort the array to handle duplicates
        backtrack(res, curr, nums, 0);
        return res;
    }
    private:
    void backtrack(vector<vector<int>>& res, vector<int>& curr, vector<int>& nums, int start) {
        res.push_back(curr);
         // add the current subset to the result
        for (int i = start; i < nums.size(); i++) {
            if (i > start && nums[i] == nums[i - 1]) 
            continue; 
            // skip duplicates
            curr.push_back(nums[i]);
            backtrack(res, curr, nums, i + 1);
            curr.pop_back();
        }
    }

};
