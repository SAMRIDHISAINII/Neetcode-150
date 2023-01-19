class Solution {
public:
    // vector<string> letterCombinations(string digits) {
//         letter combitantin of the phone number
//         using the pjone umbe
        vector<string> digit2letters;
    vector<string> ans;
    
    void backtrack(string& comb, string next_digits){
        if(next_digits.empty())
        {
            ans.push_back(comb);
        }
        else
        {
            for(const char& c : digit2letters[next_digits[0]-'0']){
                comb += c;
                backtrack(comb, next_digits.substr(1));
                comb.pop_back();
            }
        }
    }
    
    vector<string> letterCombinations(string digits) {
        digit2letters = vector<string>(10);
        digit2letters[2] = "abc";
        digit2letters[3] = "def";
        digit2letters[4] = "ghi";
        digit2letters[5] = "jkl";
        digit2letters[6] = "mno";
        digit2letters[7] = "pqrs";
        digit2letters[8] = "tuv";
        digit2letters[9] = "wxyz";
        
        if(digits.empty())
         return vector<string>();
        
        string comb = "";
        backtrack(comb, digits);
        
        return ans;
    }
};
