/*
Author : Ashish Kumar
Date : 14/02/2024
Problem : Rearrange Array Elements by Sign
Problem Link : https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
Difficulty : Medium
*/


class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int i = 0, j = 1;
        int n = nums.size();

        vector<int> ans(n);

        for(int p = 0; p < n; p++){
            if(nums[p] < 0){
                ans[j] = nums[p];
                j += 2;
            }
            else{
                ans[i] = nums[p];
                i += 2;
            }
        }

        return ans;
    }
};
