/*
Merge two sorted linked lists and return it as a new list. 
The new list should be made by splicing together the nodes of the first two lists.

Example:

Input: 1->2->4, 1->3->4
Output: 1->1->2->3->4->4
*/

package main

import (
	"fmt"
)

type ListNode struct {
	Val int
	Next *ListNode
}

func mergeTwoLists(l1 *ListNode, l2 *ListNode) *ListNode {
	if l1 == nil {
		return l2
	}

	if l2 == nil {
		return l1
	}
	var node *ListNode

	if l1.Val < l2.Val {
		node = l1
		node.Next = l1
		l1 = l1.Next
	} else {
		node = l2
		node.Next = l2
		l2 = l2.Next
	}

	for l1 != nil && l2 != nil {
		if l1.Val < l2.Val {
			node.Next = l1
			l1 = l1.Next
		} else {
			node.Next = l2
			l2 = l2.Next
		}
		node = node.Next
	}

	if l1 != nil {
		node.Next = l1
	}

	if l2 != nil {
		node.Next = l2
	}

	return node
}

func makeListNode(arr []int) *ListNode {
	if len(arr) == 0 {
		return nil
	}

	res := &ListNode{
		Val: arr[0],
	}
	temp := res

	for i := 1; i < len(arr); i++ {
		temp.Next = &ListNode{Val: arr[i]}
		temp = temp.Next
	}

	return res
}

func main()  {
	list_a := makeListNode([]int{3, 4, 5})
	list_b := makeListNode([]int{4, 5, 7})

	list_c := mergeTwoLists(list_a, list_b)
	fmt.Println(list_c)
	
}


