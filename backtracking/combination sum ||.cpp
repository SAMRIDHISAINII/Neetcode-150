void combinationSumHelper(vector<int>& candidates, int target,
                          int start, vector<vector<int>>& res, vector<int>& combination) {
    if (target == 0) {
        res.push_back(combination);
        return;
    }
    for (int i = start; i < candidates.size(); i++)
    {
        if (i > start && candidates[i] == candidates[i-1]) {
            continue;
        }
        if (target < candidates[i]) {
            break;
        }
      
        combination.push_back(candidates[i]);
        combinationSumHelper(candidates, target - candidates[i], i+1, res, combination);
        combination.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> res;
    vector<int> combination;
    combinationSumHelper(candidates, target, 0, res, combination);
    return res;
}
