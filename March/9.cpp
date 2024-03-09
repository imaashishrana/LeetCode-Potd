/*
Author : Ashish Kumar
Date : 09/03/2024
Problem : Minimum Common Value
Difficulty : Easy 
Problem Link : https://leetcode.com/problems/minimum-common-value/description/?envType=daily-question&envId=2024-03-09
*/


class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
       int m = nums1.length ;
        int n = nums2.length ;

        int i = 0; // for nums1
        int j = 0; // for nums2

        while (i < m && j < n) {
            if (nums1[i] == nums2[j]) {
                return nums1[i];
            } else if (nums1[i] < nums2[j]) {
                i++;
            } else {
                j++;
            }
        }

        return -1;
    }
};
