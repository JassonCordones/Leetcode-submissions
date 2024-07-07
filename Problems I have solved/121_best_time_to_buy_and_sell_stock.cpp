#include <algorithm>
#include <vector>
class Solution {
public:
    int maxProfit(std::vector<int>& p) {
        // if (p.empty()) return 0;

        int mip = p[0];
        int mxp = 0;
        int s = p.size();
        for (int i = 1; i < s; ++i) {
            mip = std::min(mip, p[i]); // Track the minimum price so far
            mxp = std::max(mxp, p[i] - mip); // Calculate potential profit
        }

        return mxp;
    }
};