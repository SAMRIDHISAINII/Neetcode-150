class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // creating a set to for storing thevalue thst will be seen
        unordered_set<int> seen;

        // iterate throufht the elemenets in the arrat
        // for(int num: nums)
        for(int i=0; i<nums.size(); i++)
      
        {
            // if the current elemt in seen true kardo
               int num = nums[i];
            if(seen.count(num))
            {
                return true;
            }
            // add the ekenetb to the set 
            seen.insert(num);
        }
        //  set<int> myset(nums.begin(), nums.end());
        // return myset.size() < nums.size();

        // so as we havbnt seen any duplicate
        return false;

        // therefore the solution of the element is   O(n)
        
    }
};
