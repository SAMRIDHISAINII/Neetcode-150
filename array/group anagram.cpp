class Solution {
public:
    bool isAnagram(string s, string t) {

        //  first to check that woh anafram hai ka nahi 
        // check karo string ki lenght same hai subse imp 
        // create karo frequency map for each string  jo ki count karegi the number of times each character appers in the string 
        // compare the frequency map of the two string 

        
        //   map<char, int> count;
        // for the char s
        //  wahi check karo first to chck that woh anagram hai ka nahi
        if(s.length()!=t.length())
        {
            return false;
        }

    // create frequency maps for vboth strings

    unordered_map<char, int> s_freq;
    unordered_map<char, int> t_freq;
    for(int i=0; i<s.length(); i++)
    {
        char c = s[i];
        s_freq[c]++;
    }
    for(int i=0; i<t.length(); i++)
    {
        char c = t[i];
        t_freq[c]++;
    }

    // compare the frequency maps
      for (auto [c, count] : s_freq) {
        if (t_freq[c] != count) {
            return false;
        }
    }
    return true;
        // for(char c : s){
        //     if(count.find(c) == count.end()){
        //         count[c] = 1;
        //     }else{
        //         count[c] += 1;
        //     }
        // }
        
        // for tthe char t
        // for(char c : t){
            // map<char, int>::iterator it = count.find(c);
        //     map<char, int>::iterator it = count.find(c);
        //     if(it == count.end()){
        //         return false;
        //     }else if(count[c] > 1){
        //         count[c] -= 1;
        //     }else{
        //         count.erase(it);
                
        //     }
        // }
        
        // if(count.empty()) return true;
        // else
        // return false;
        
    }
};
