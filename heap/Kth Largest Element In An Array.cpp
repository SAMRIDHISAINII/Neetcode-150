class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
          priority_queue<int, vector<int>, greater<int>> pq;
//         using the min heap
        
       for(int i=0;i<nums.size();i++){
            
            pq.push(nums[i]);
            if(pq.size() > k){
                pq.pop();
            }
        }
        
        //the smallest in top k elements
        return pq.top();
    }
};

// so k th larget element 
// priority_queue<int, vector<int>, greater<int>> pq;


// for(int num: nums)
// {
//     pq.push(num);
//     if(pq.size()>k)
//     {
//         pq.pop();
        
        
//     }
    
    
//     return pq.top();
// }
