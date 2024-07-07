#include <vector>
class Solution {
public:
    int jump(std::vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
        int j = 0,ce=0,mr=0;

        for (int i = 0; i < n - 1; ++i) {
            mr = std::max(mr, i+nums[i]);
            if (i ==ce) {
            ++j;
            ce=mr;
            if (ce>=n-1) return j;
        }
    }
    return j;
    }
};

