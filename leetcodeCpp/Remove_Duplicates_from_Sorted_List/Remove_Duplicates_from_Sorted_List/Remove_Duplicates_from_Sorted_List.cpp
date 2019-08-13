/*
Given a sorted linked list, delete all duplicates 
such that each element appear only once.

For example,
Given 1->1->2, return 1->2.
Given 1->1->2->3->3, return 1->2->3.

*/

#include<iostream>

using namespace std;



 struct ListNode {
     int val;
     ListNode *next;
 };


class Solution {
public:
	ListNode * deleteDuplicates(ListNode* head) {
		if (!head) {
			return head;
		}
		ListNode *current = head;
		while (current->next) {
			if (current->val == current->next->val) {
				ListNode *temp = current->next;
				current->next = temp->next;
				delete temp;
			}
			else {
				current = current->next;
			}
		}
		return head;
	}
};






