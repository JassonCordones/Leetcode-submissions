#include <vector>
class Solution {
public:
    bool canJump(std::vector<int>& nums) {
        int n = nums.size();
        if (n == 1) return true;
        if(nums[0]==0)return false;
        int mr = 0;

        for(int i=0;i<n;++i){
            if(i>mr) return false;
            mr = std::max(mr,i+nums[i]);
            if(mr >=n-1) return true;
        }
        return true;
    }
};

