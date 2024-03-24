class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> words;
        for (int i = 0; i < wordDict.size(); i++) {
            words.insert(wordDict[i]);
        }
        
        int n = s.size();
        vector<bool> dp(n + 1);  // Initialize dynamic programming array
        dp[0] = true;  // Base case: Empty string can always be segmented
        
        // Iterate through each position in the string
        for (int i = 1; i <= n; i++) {
            // Iterate backwards to find possible segmentation points
            for (int j = i - 1; j >= 0; j--) {
                if (dp[j]) {
                    // Check if the substring from j to i can be found in the dictionary
                    string word = s.substr(j, i - j);
                    if (words.find(word) != words.end()) {
                        dp[i] = true;  // Update dp[i] if the substring can be segmented
                        break;
                    }
                }
            }
        }
        
        return dp[n];
    }
};