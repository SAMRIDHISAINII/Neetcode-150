class Solution {
public:
    bool isPalindrome(string s) {
      
// same word backword or forward
        
    int l = 0;
    int r = s.length() - 1;
// using 
    while (l < r) {
      while (l < r && !isalnum(s[l]))
        l++;
      while (l < r && !isalnum(s[r]))
        r--;
      if (tolower(s[l]) != tolower(s[r]))
        return false;
      l++;
      r--;
    }

    return true;


    }
};
