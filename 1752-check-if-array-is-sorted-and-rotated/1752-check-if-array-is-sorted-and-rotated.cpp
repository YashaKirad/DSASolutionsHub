class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        
        // Function to check if the array is sorted in non-decreasing order
        auto isSorted = [](const vector<int>& arr) {
            for (int i = 0; i < arr.size() - 1; i++) {
                if (arr[i] > arr[i + 1]) {
                    return false;
                }
            }
            return true;
        };
        
        // Find the pivot point (index where rotation occurs)
        auto findPivot = [](const vector<int>& arr) {
            for (int i = 1; i < arr.size(); i++) {
                if (arr[i] < arr[i - 1]) {
                    return i;
                }
            }
            return 0;
        };
        
        if (isSorted(nums)) {
            return true;  // Array is already sorted
        }
        
        int pivot = findPivot(nums);
        
        // Check if the array is sorted after rotation
        vector<int> rotated(nums.begin() + pivot, nums.end());
        rotated.insert(rotated.end(), nums.begin(), nums.begin() + pivot);
        
        return isSorted(rotated);
    }
};
