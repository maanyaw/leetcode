class Solution {
public:
    bool isConcatenated(string word, unordered_set<string> &st, unordered_map<string, bool> &memo) {
        // Check the memoization cache first
        if (memo.find(word) != memo.end()) {
            return memo[word];
        }
        
        int l = word.length();
        for (int i = 1; i < l; i++) {
            string prefix = word.substr(0, i);
            string suffix = word.substr(i);
            
            if (st.find(prefix) != st.end() && (st.find(suffix) != st.end() || isConcatenated(suffix, st, memo))) {
                memo[word] = true; // Cache the result before returning
                return true;
            }
        }
        
        memo[word] = false; // Cache the result before returning
        return false;
    }

    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        unordered_set<string> st(begin(words), end(words));
        vector<string> result;
        unordered_map<string, bool> memo;
        
        for (string word : words) {
            if (isConcatenated(word, st, memo) && word.size() > 0) {
                result.push_back(word);
            }
        }
        return result;
    }
};
