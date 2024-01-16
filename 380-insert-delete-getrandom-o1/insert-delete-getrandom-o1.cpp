class RandomizedSet {
public:
    set<int>s;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(s.find(val)==s.end()){
            s.insert(val);
            return 1;
        }
        else{
            return 0;
        }
    }
    
    bool remove(int val) {
           if(s.find(val)!=s.end()){
            s.erase(val);
            return 1;
        }
        else{
            return 0;
        }
    }
    
    int getRandom() {
        // vector<int>v;
        // for(auto it:s){
        //     v.push_back(it);
        // }
        // int idx=rand()%v.size();
        // return v[idx];
       return  *(next(s.begin(), rand() % s.size()));
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */