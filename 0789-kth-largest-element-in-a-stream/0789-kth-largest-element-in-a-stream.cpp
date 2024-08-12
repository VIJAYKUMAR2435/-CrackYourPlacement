class KthLargest {
    private:
    std::priority_queue<int, vector<int>, greater<int>> heap_;
    int k_;
public:
    KthLargest(int k, vector<int>& nums) {
           k_ = k;
      
        sort(nums.begin(), nums.end(), greater<int>()); 
   
        for (int i = 0; i < min(k, static_cast<int>(nums.size())); ++i) heap_.push(nums[i]);
    }
    
    int add(int val) {
         if (heap_.size() < k_) heap_.push(val);
        else {
            if (val > heap_.top()) {
                heap_.pop();
                heap_.push(val);
            }
        }
        return heap_.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */