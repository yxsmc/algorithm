class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int iCount = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) {
                iCount++;
            }
            else {
                nums[i-iCount] = nums[i];
            }
        }
        for (int i = nums.size() - iCount; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};