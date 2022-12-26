class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // for solving yeh wali problem 
        // iterate karo elemnts ko nums array fir each element x fir uske baad check target array mein

        // uske baad agar toh target found hai toh return kardo indic of x saath meiontarget

        // create karenge map for storing the indices of the element inarr
        unordered_map<int,int> indices;

        // iterate through the elements in the array 
        for(int i=0; i<nums.size(); i++)
        {
            int x = nums[i];
             // Check if target - x is in the array
        if (indices.count(target - x)) {
            // If it is, return the indices of x and target - x
            return { indices[target - x], i };
        }

        // Otherwise, add the index of x to the map
        indices[x] = i;
        }
        // If we have not found a solution, return an empty vector
    return {};
    }
};

// COMPLEXITY HOGI O(n)
