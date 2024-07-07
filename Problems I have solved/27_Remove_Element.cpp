#include <vector>
class Solution {
public:
    int removeElement(std::vector<int>& n, int v) {

    int i=0, k=0;
    int s=n.size();
    for (i=0;i<s;++i) {
        if (n[i]!=v) {
            n[k]=n[i];
            ++k;
        }
    }
    return k; 
    }
};