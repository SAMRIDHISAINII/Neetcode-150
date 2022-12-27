class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // we can use two arrays to store the prefix and suffix products of the input array.
        int n = nums.size();
    vector<int> prefix(n), suffix(n), res(n);
    prefix[0] = 1;
    suffix[n - 1] = 1;
    for (int i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }
    for (int i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }
    for (int i = 0; i < n; i++) {
        res[i] = prefix[i] * suffix[i];
    }
    return res;
    }
};
