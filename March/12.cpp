/*
Author : Ashish Kumar
Date : 12/03/2024
Problem : Remove Zero Sum Consecutive Nodes from Linked List
Difficulty : Medium
Problem Link : https://leetcode.com/problems/remove-zero-sum-consecutive-nodes-from-linked-list/description/?envType=daily-question&envId=2024-03-12
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        unordered_map<int, ListNode*> prefixSumMap;
        int prefixSum = 0;
        prefixSumMap[prefixSum] = dummy;

        while (head) {
            prefixSum += head->val;

            if (prefixSumMap.find(prefixSum) != prefixSumMap.end()) {
                ListNode* prevNode = prefixSumMap[prefixSum];
                ListNode* temp = prevNode->next;
                int tempSum = prefixSum;
                while (temp != head) {
                    tempSum += temp->val;
                    prefixSumMap.erase(tempSum);
                    temp = temp->next;
                }
                prevNode->next = head->next;
            } else {
                prefixSumMap[prefixSum] = head;
            }

            head = head->next;
        }

        return dummy->next;
    }
};
