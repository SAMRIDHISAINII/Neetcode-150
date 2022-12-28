class Solution {
public:
    int characterReplacement(string s, int k) {
        int maxLen = 0;
        vector<bool> letters;
        letters.resize(26, false);
       for (int i = 0; i < s.size(); i++) {
  int c = s[i];
  // Your code here

            letters[c - 'A'] = true;
        }
        for(int i = 0; i < 26; i++){
            if(!letters[i]) continue;
            int p, q = 0, r = 0;
            for(p = 0; p < s.length(); p++){
                if(s[p] == i + 'A'){
                    maxLen = max(maxLen, p - q + 1);
                }
                else{
                    if(r < k){
                        maxLen = max(maxLen, p - q + 1);
                        r++;
                    }
                    else{
                        while(s[q] == i + 'A') q++;
                        q++;
                        maxLen = max(maxLen, p - q + 1);
                    }
                }
            }
        }
        return maxLen;
    }
};
