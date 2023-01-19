class Solution {
public:

void subsets(vector<int> &nums, int index, vector<int> &temp, vector<vector<int>> &result)
{
    // Add the current subset to the result
    result.push_back(temp);

    // Generate all subsets that include the current element
    for (int i = index; i < nums.size(); i++)
    {
        temp.push_back(nums[i]);
        subsets(nums, i + 1, temp, result);
        temp.pop_back();
    }
}
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
    vector<int> temp;
    subsets(nums, 0, temp, result);
    return result;
    }
};
