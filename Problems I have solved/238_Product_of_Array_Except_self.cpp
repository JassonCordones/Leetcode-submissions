#include <vector>
class Solution {
public:
    std::vector<int> productExceptSelf(std::vector<int>& n) {
        int s = n.size();
        std::vector<int> a(s, 1);

        int lp=1;
        for (int i = 0; i < s; ++i) {
            a[i] = lp;
            lp *= n[i];
        }

        int rp = 1;
        for (int i = s - 1;i >= 0; --i) {
            a[i] *= rp;
            rp *= n[i];
        }
        
        return a;
    }
};