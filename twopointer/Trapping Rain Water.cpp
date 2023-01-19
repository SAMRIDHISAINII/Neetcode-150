// class Solution {
// public:
//     int trap(vector<int>& height) {
// //         dynamic programming
//           int N = height.size();
//         if(N == 0) return 0;
//         int ans = 0;
        
//         vector<int> leftMax(N), rightMax(N);
//         leftMax[0] = height[0];
//         for(int i = 1; i < N; i++){
//             leftMax[i] = max(leftMax[i-1], height[i]);
//         }
        
//         rightMax[N-1] = height[N-1];
//         for(int i = N-2; i >= 0; i--){
//             rightMax[i] = max(rightMax[i+1], height[i]);
//         }
        
//         for(int i = 1; i < N-1; i++){
//             ans += min(leftMax[i], rightMax[i]) - height[i];
//         }
        
//         return ans;
//     }
// };

class Solution {
public:
    int trap(vector<int>& height) {
    // Initialize left and right pointers to the first and last element of the array
    int left = 0, right = height.size() - 1;
    // Initialize a variable to store the total trapped water
    int trappedWater = 0;
    // Continue the loop until the left pointer is less than the right pointer
    while (left < right) {
        // Find the minimum height between the left and right pointer
        int minHeight = min(height[left], height[right]);
        // Check if the height at the left pointer is equal to the minimum height
        if (height[left] == minHeight) {
            // If true, move the left pointer to the right
            left++;
            // Continue moving the left pointer to the right while the height is less than the minimum height and the left pointer is less than the right pointer
            while (left < right && height[left] < minHeight) {
                // Add the difference between the minimum height and the current height at the left pointer to the total trapped water
                trappedWater += minHeight - height[left];
                left++;
            }
        } 
        // If the height at the left pointer is not equal to the minimum height
        else {
            // Move the right pointer to the left
            right--;
            // Continue moving the right pointer to the left while the height is less than the minimum height and the left pointer is less than the right pointer
            while (left < right && height[right] < minHeight) {
                // Add the difference between the minimum height and the current height at the right pointer to the total trapped water
                trappedWater += minHeight - height[right];
                right--;
            }
        }
    }
    // Return the total trapped water
    return trappedWater;
}

};
