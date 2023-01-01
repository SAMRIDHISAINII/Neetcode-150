class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(begin(nums), end(nums));
        // begoin and end

        vector<vector<int>> result;
        // using vector result 
        vector<vector<int>> result;

        for(int i= size(nums)-1; i>=2; i--)
        {
            if(i+1<size(nums) && nums[i] == nums[i+1])
            {
                continue;
            }
            const auto& target = -nums[i];

        }
        for (int i = size(nums) - 1; i >= 2; --i)
         {
            if (i + 1 < size(nums) && nums[i] == nums[i + 1]) {
                continue;
            }
            const auto& target = -nums[i];
            // i m having doubt
            int left=0;
            int right =i-1;
            while(left< right)
            {
                if(nums[left]+ nums[right]<target)
                {
                    left++;
                }
                else if(nums[left]+ nums[right]<target)
                {
                    right--;
                }
                else[
                    result.push
                ]
            }
            int left = 0, right = i - 1;
            while (left < right) {
                if (nums[left] + nums[right] < target) {
                    left++;
                } else if (nums[left] + nums[right] > target) {
                    right--;
                } else {
                    result.push_back({nums[left], nums[right], nums[i]});
                    left++; right--;
                    while (left < right && nums[left] == nums[left - 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right + 1]) {
                        right++;
                    }
                }
            }
        }
        return result;
    }
};
