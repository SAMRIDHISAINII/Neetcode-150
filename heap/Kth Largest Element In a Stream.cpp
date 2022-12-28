class KthLargest {
 private:
  int k;
  priority_queue<int, vector<int>, greater<int>> pq;

 public:
  KthLargest(int k, vector<int> nums) {
 this->k = k;
    for (int num : nums) {
      add(num);
    }
  }

  int add(int val) {
    if (pq.size() < k) {
      pq.push(val);
    } else if (val > pq.top()) {
      pq.pop();
      pq.push(val);
    }
    return pq.top();
  }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
