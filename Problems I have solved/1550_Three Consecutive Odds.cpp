#include <vector>
class Solution {
public:
    bool threeConsecutiveOdds(std::vector<int>& arr) {
        int odds=0;
        int num=0;
        int size = arr.size();
        while(num <  size){
            if(arr[num] % 2 != 0){
                odds++;
                if (odds ==3) 
                return true;
            }else{
                odds = 0;
            }
            num++;
        }
    return false;
    }
};

