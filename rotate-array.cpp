class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size();
        int i = k % len;
        for (int j = i; j > 0; j--) {
            nums.push_back(nums[len-j]);
        }
        for (int j = len - 1; j >= i; j--) {
            nums[j] =nums[j-i];
        }
        for (int j = 0; j < i; j++) {
            nums[j] = nums[len+j];
        }
        nums.erase(nums.begin()+len, nums.end());
    }
};