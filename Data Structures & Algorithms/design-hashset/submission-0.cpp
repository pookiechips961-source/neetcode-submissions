class MyHashSet {
public:

    vector<list<int>> buckets;
    MyHashSet() {
        buckets.resize(1009);
    }
    
    void add(int key) {
        if(contains(key)) return;
        int idx = key % 1009;
        buckets[idx].push_back(key);
    }
    
    void remove(int key) {
        int idx = key % 1009;
        for(auto it = buckets[idx].begin(); it != buckets[idx].end(); it++)
        {
            if(*it == key)
            {
                buckets[idx].erase(it);
                return;
            }
        }
    }
    
    bool contains(int key) {
        int idx = key % 1009;
        for(auto it = buckets[idx].begin(); it != buckets[idx].end(); it++)
        {
            if(*it == key) return true;
        }
        
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */