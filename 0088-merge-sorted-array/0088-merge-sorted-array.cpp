class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for (int i = 0; i < n; i++) {
        // Find the correct position to insert nums2[i] into nums1
        int j = 0;
        while (j < m && nums1[j] <= nums2[i]) {
            j++;
        }

        // Shift elements to the right to make space for nums2[i]
        for (int k = m; k > j; k--) {
            nums1[k] = nums1[k - 1];
        }

        // Insert nums2[i] into nums1 at the correct position
        nums1[j] = nums2[i];
        m++; // Increase the size of nums1
        
    }
    }
};