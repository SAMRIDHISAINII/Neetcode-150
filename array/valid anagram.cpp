class Solution {
public:
    bool isAnagram(string s, string t) {
          map<char, int> count;
        // for the char s
        for(char c : s){
            if(count.find(c) == count.end()){
                count[c] = 1;
            }else{
                count[c] += 1;
            }
        }
        
        // for tthe char t
        for(char c : t){
            // map<char, int>::iterator it = count.find(c);
            map<char, int>::iterator it = count.find(c);
            if(it == count.end()){
                return false;
            }else if(count[c] > 1){
                count[c] -= 1;
            }else{
                count.erase(it);
                
            }
        }
        
        if(count.empty()) return true;
        else
        return false;
        
    }
};
