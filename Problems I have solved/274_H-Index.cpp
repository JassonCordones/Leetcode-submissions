#include <algorithm>
#include <vector>
class Solution {
public:
    int hIndex(std::vector<int>& c) {
        std::sort(c.begin(), c.end(), std::greater<int>());
        int h=0;
        while (h<c.size() && c[h]>h) {
            ++h;
        }
        return h;
    }
};

