class Solution {
public:
    void swap(int i, int j, vector<int>& nums) {
//         taking it to swap
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
//         once stored in temprary
        
    }
    
    void helper(int i, vector<int>& perm, vector<vector<int>>& result) {
        // ok so using the istatement
//         m = prem.size();
        
        if (i == perm.size() - 1)
         {
            vector<int> v(perm);
//             usuing the push_back to store it
            result.push_back(v);
            return;
        }
        
//         now using the loop once pushed 
        
        for (int j = i; j < perm.size(); j++) {
//             using the swap for the same and fucnrtion
            swap(i, j, perm);
            helper(i + 1, perm, result);
            // helper(i+1,perm,result);
            swap(i, j, perm);
        }
    }
    
    // using the vecotr permute
    vector<vector<int>> permute(vector<int>& nums) {
//         using the statment
        if (nums.size() == 0) return {};

        vector<vector<int>> result;

        helper(0, nums, result);
        // helper 
        // (0,nums,result);
        return result;
    }
};
