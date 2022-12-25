class Solution {
public:
    int trap(vector<int>& height) {
//         dynamic programming
          int N = height.size();
        if(N == 0) return 0;
        int ans = 0;
        
        vector<int> leftMax(N), rightMax(N);
        leftMax[0] = height[0];
        for(int i = 1; i < N; i++){
            leftMax[i] = max(leftMax[i-1], height[i]);
        }
        
        rightMax[N-1] = height[N-1];
        for(int i = N-2; i >= 0; i--){
            rightMax[i] = max(rightMax[i+1], height[i]);
        }
        
        for(int i = 1; i < N-1; i++){
            ans += min(leftMax[i], rightMax[i]) - height[i];
        }
        
        return ans;
    }
};
