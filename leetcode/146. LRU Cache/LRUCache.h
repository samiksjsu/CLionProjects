#include <unordered_map>
#include <deque>
#include <algorithm>
#include <list>
using namespace std;

class LRUCache {
public:
    unordered_map<int, int> m1; //This map is used to store the key value pairs
    unordered_map<int, list<int>::iterator> m2; //This is used to track the addresses of the elements in the list
    list<int> orderOfUse;

    int capacity = 0;

    LRUCache(int capacity) {
        this->capacity = capacity;
    }

    int get(int key) {
        if (m1.find(key) != m1.end()) {
            orderOfUse.erase(m2[key]);
            orderOfUse.push_front(key);
            m2[key] = orderOfUse.begin();
            return m1[key];
        } else {
            return -1;
        }
    }

    void put(int key, int value) {
        if (m1.find(key) != m1.end()) {
            orderOfUse.erase(m2[key]);
        } else {
            if (m1.size() >= capacity) {
                m1.erase(orderOfUse.back());
                orderOfUse.pop_back();
            }
        }
        orderOfUse.push_front(key);
        m1[key] = value;
        m2[key] = orderOfUse.begin();
    }
};
