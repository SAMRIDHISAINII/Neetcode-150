class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()) return 0;
        
        int curStreak = 1;
        int maxStreak = 1;
        
        sort(nums.begin(), nums.end());
        
        int n = nums.size();
        
        for(int i = 1; i < n; ++i){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] == nums[i-1]+1){
                // odd group ko bada karnge
                ++curStreak;
            }else{
                // naya group starting 
                maxStreak = max(maxStreak, curStreak);
                curStreak = 1;
            }
        }
        
        //updating with last group 
        maxStreak = max(maxStreak, curStreak);
        
        return maxStreak;
        }
        // unsorted array 
        // returning the () length if the kingest cinsecutive elements
      
};
