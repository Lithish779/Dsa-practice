class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
         priority_queue<int, vector<int>, greater<int>> maxHeap;

    for (int num : nums) {
        maxHeap.push(num);

        if (maxHeap.size() > k) {
            maxHeap.pop(); // remove largest
        }
    }

    return maxHeap.top();
        
        
    }
};