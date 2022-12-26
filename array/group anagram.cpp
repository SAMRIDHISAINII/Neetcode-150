class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // creating a map  that will maps from a sorted string to a lsit of its anagrams
        // uska baad iterate karo , sorrt karo aur fir add kardo 
        // extract the values from the map than 
        // and fir return kardo unko as a sum


        unordered_map<string, vector<string>> anagrams;

        // iterate karo 
        for (int i = 0; i < strs.size(); i++) {
    const string& s = strs[i];
     // Sort the string
        string sorted = s;
        sort(sorted.begin(), sorted.end());

        // Add the string to the appropriate list in the map
        anagrams[sorted].push_back(s);
}

// extract karo 
 vector<vector<string>> result;
    for (auto [_, anagram_list] : anagrams) {
        result.push_back(anagram_list);
    }

    return result;

    }
};
