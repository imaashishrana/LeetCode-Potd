/*
Author : Ashish Kumar 
Date : 08/03/2024
Problem : Count Elements With Maximum Frequency
Difficulty : Easy
Problem Link : https://leetcode.com/problems/count-elements-with-maximum-frequency/description/?envType=daily-question&envId=2024-03-08
*/

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        vector<int> arr(101);
        
        int maxFreq = 0;
        
        for(int &num : nums) {
            arr[num]++;
            maxFreq = max(maxFreq, arr[num]);
        }
        
        return count(arr.begin(), arr.end(), maxFreq)*maxFreq;
    }
};
