class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
//         so basucally we are given with an array of intefer nums
//         basically if nums= 234 target 
        vector<int> v;
//         we nned to use inorfer tog
     std::unordered_map<int, int> record;
        for (int i = 0; i != nums.size(); ++i) 
        {
            auto found = record.find(nums[i]);
            if (found != record.end())
                
                return {found->second, i};
            record.emplace(target - nums[i], i);
        }
        return {-1, -1};
    }
};
