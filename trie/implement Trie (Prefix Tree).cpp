class Trie {
 private:
  struct TrieNode {
    bool is_word;
    TrieNode* children[26];
    TrieNode() : is_word(false) {
      for (int i = 0; i < 26; i++) {
        children[i] = nullptr;
      }
    }
  };
  TrieNode* root;

 public:
 
  Trie() : root(new TrieNode()) {}

  /** Inserts a word into the trie. */
  void insert(string word) {
    TrieNode* curr = root;
    for (char c : word) {
      if (!curr->children[c - 'a']) {
        curr->children[c - 'a'] = new TrieNode();
      }
      curr = curr->children[c - 'a'];
    }
    curr->is_word = true;
  }

  /** Returns if the word is in the trie. */
  bool search(string word) {
    TrieNode* curr = root;
    for (char c : word) {
      if (!curr->children[c - 'a']) {
        return false;
      }
      curr = curr->children[c - 'a'];
    }
    return curr->is_word;
  }

  /** Returns if there is any word in the trie that starts with the given prefix. */
 
  bool startsWith(string prefix) {
    TrieNode* curr = root;
    for (char c : prefix) {
      if (!curr->children[c - 'a']) {
        return false;
      }
      curr = curr->children[c - 'a'];
    }
    return true;
  }
};
