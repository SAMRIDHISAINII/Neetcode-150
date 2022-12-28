class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int n = s.size();
//         using the map 
        map<char, int> position;
//         maping and it will be sorting as we have ised maping
        
        int ans = 0;
        
        for(int i = 0, j = 0; j < n; j++){
//             stl on its power
            
            if(position.find(s[j]) != position.end()){
                i = max(i, position[s[j]]+1);
            }
            
            ans = max(ans, j-i+1);
            position[s[j]] = j;
        }
        
        return ans;
    }
};
