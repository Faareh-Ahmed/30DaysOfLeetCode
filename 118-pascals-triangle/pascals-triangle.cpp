class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> finalarr;

        for (int i = 0; i < numRows; i++) {
            vector<int> temparr;
            for (int j = 0; j <= i; j++) {
                if (j == 0 || j == i) {
                    temparr.push_back(1);
                } else {
                    temparr.push_back(finalarr.back()[j - 1] + finalarr.back()[j]);
                }
            }
            finalarr.push_back(temparr);
        }
        return finalarr;
    }
};