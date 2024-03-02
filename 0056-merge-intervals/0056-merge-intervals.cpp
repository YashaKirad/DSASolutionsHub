#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int n=intervals.size();
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            int start=intervals[i][0];
            int end= intervals[i][1];
            if(!ans.empty() && start <= ans.back()[1]){ // Check if the current interval overlaps with the last interval in ans
                ans.back()[1] = max(ans.back()[1], end); // Update the end value of the last interval in ans
            }
            else {
                ans.push_back({start,end}); // Add a new interval to ans
            }
        }
        return ans;
    }
};
