#include <vector>
class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        int ca = nums[0];
        int co = 1;
        int s = nums.size();

        for (int i = 1; i < s; ++i) {
            if (nums[i] == ca) {
                ++co;
            } else {
                --co;
                if (co == 0) {
                    ca = nums[i];
                    co = 1;
                }
            }
        }

    return ca;
    }
};