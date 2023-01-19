class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        // If the target is 0, add the current combination to the result list
    if (target == 0) {
        res.push_back(combination);
        return;
    }
    // Iterate through the candidates array starting from the current index
    for (int i = begin; i < candidates.size(); i++) {
        // If the target is less than the current candidate, continue to the next candidate
        if (target < candidates[i]) {
            continue;
        }
        // Add the current candidate to the current combination
        combination.push_back(candidates[i]);
        // Call the helper function recursively with the updated target and combination
        combinationSumHelper(candidates, target - candidates[i], res, combination, i);
        // Backtrack by removing the last element from the combination
        combination.pop_back();
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    // Initialize the result list and the current combination
    vector<vector<int>> res;
    vector<int> combination;
    // Call the helper function with the candidates array, the target, the result list, the current combination and the starting index of 0
    combinationSumHelper(candidates, target, res, combination, 0);
    return res;
}
};
