#include <iostream>
using namespace std;

struct ListNode {
	int val;
	ListNode *next;
}; 

//creat a linklist
ListNode* creatList(int A[],int size) {
	ListNode* p, *pCurrent, *pNew;
	p = new ListNode;
	p->val = A[0];
	p->next = NULL;
	pCurrent = p;

	for (int i = 1; i <= size-1; i++) {
		pNew = new ListNode;
		pNew->val = A[i];
		pCurrent->next = pNew;
		pNew->next = NULL;
		pCurrent = pNew;
	}
	return p;
};

//print a linklist
void Listprint(ListNode* p) {
	ListNode* tem;
	if (p == NULL) {
		return;
	}
	tem = p;
	while (tem) {
		cout << tem->val<<endl;
		tem = tem->next;
	}
}

//insert a linklist, insert y value after x value
ListNode* insertlist(ListNode* p, int x, int y) {
	ListNode *pCurrent, *pNew;
	if (p == NULL) {
		return NULL;
	}
	pCurrent = p;
	pNew = new ListNode;
	pNew->val = y;
	pNew->next = NULL;
	while (pCurrent) {
		if (pCurrent->val == x) {
			break;
		}
		pCurrent = pCurrent->next;
	}
	pNew->next = pCurrent->next;
	pCurrent->next = pNew;
	return p;
}

int main() {
	int A[] = { 100,102,103,104,105,107,108 };
	int size = sizeof(A) / sizeof(A[0]);
	ListNode* p = creatList(A,size);
	ListNode* pp= insertlist(p, 105, 106);
	Listprint(pp);
	system("pause");
	return 0;
}