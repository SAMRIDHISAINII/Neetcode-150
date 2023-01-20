class Solution {
public:
    int maxArea(vector<int>& height) {
//        two pointer on
         int N = height.size();
        int left = 0, right = N-1, ans = 0;
        while(left < right){
            ans = max(ans, min(height[left], height[right]) * (right-left));
            //move the pointer pointing to lower bar forward,
            //because if we move the pointer pointing to higher bar forward, 
            //the area can only be shrinked
            if(height[left] < height[right]){
                left++;
                
            }else{
                right--;
            }
        }
        return ans;
    }
};
