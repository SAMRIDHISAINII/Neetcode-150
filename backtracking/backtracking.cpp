bool isPalindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void partitionHelper(string s, vector<vector<string>>& res, vector<string>& partition, int start) {
    if (start == s.length()) {
        res.push_back(partition);
        return;
    }
    for (int i = start; i < s.length(); i++) {
        string substring = s.substr(start, i - start + 1);
        if (isPalindrome(substring)) {
            partition.push_back(substring);
            partitionHelper(s, res, partition, i + 1);
            partition.pop_back();
        }
    }
}

vector<vector<string>> partition(string s) {
    vector<vector<string>> res;
    vector<string> partition;
    partitionHelper(s, res, partition, 0);
    return res;
}
