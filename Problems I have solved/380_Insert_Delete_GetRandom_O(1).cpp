#include <cstdlib>
#include <ctime>
#include <unordered_map>
#include <vector>
class RandomizedSet {
public:
    RandomizedSet() {
        srand(time(0));
    }
    
    bool insert(int val) {
    if(map.contains(val)){return false;}
    data.push_back(val);
    map[val] = data.size()-1;
    return true;
    }
    
    bool remove(int val) {
        if(!map.contains(val)){return false;}
        int lastElement = data.back();
        int idx = map[val];

        data[idx] = lastElement;
        map[lastElement] = idx;

        data.pop_back();
        map.erase(val);
        return true;
    }
    
    int getRandom() {
        // int randomIndex = rand() % data.size();
        return data[std::rand()%data.size()];
    }
    private:
    std::vector<int> data;
    std::unordered_map<int, int> map; 
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */