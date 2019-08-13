/*Merge two sorted linked lists and return it as a new list. 
The new list should be made by splicing together the nodes of the first two lists.
*/



/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode(int x) : val(x), next(NULL) {}
* };
*/

#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode* next;
	ListNode(int x):val(x),next(NULL){}
};


class Solution {
public:
	ListNode * mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode Newlist(0);
		ListNode* l3 = &Newlist;

		while (l1&&l2) {
			if (l1->val <= l2->val) {
				l3->next = l1;
				l1 = l1->next;
			}
			else{
				l3->next = l2;
				l2 = l2->next;
			}
			l3 = l3->next;
		}

		if (l1) {
			l3->next = l1;
		}

		if (l2) {
			l3->next = l2;
		}
		return Newlist.next;
	}
};


	
	









