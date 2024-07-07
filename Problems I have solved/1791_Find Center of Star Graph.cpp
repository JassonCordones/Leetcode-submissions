#include <vector>
class Solution {
public:
    int findCenter(std::vector<std::vector<int>>& e) {
        return (e[0][0]==e[1][0] || e[0][0] == e[1][1]) ? e[0][0] : e[0][1];

    }
};