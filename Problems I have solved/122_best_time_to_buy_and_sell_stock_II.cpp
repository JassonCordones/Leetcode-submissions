#include <vector>
class Solution {
public:
    int maxProfit(std::vector<int>& p) {
    int mp = 0;
    int s = p.size();
        for (int i = 1; i < s; ++i) {
            if (p[i] > p[i - 1]) {
            mp += p[i] - p[i - 1];
            }
        }
        return mp;
        }
};