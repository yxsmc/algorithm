class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        if (n < 1)
            return;
        int j = 0; 
        for (int i = 0; i < m; i++) {
            if (nums1[i] > nums2[j]) {
               nums1.insert(nums1.begin() + i, nums2[j]);
               m++;
               j++;
               if (j == n) {
                   nums1.erase(nums1.begin() + m, nums1.end());
                   return;
               }
            }
       
        } 
        if (nums1.size() > m) {
            nums1.erase(nums1.begin() + m, nums1.end());
        }
        
        nums1.insert(nums1.end(), nums2.begin() + j, nums2.begin() + n);
    }
};