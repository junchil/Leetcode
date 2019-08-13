/*
You are given two non-empty linked lists representing two non-negative integers. 
The digits are stored in reverse order and each of their nodes contain a single digit. 
Add the two numbers and return it as a linked list.

You may assume the two numbers do not contain any leading zero, except the number 0 itself.

Example:

Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
Output: 7 -> 0 -> 8
Explanation: 342 + 465 = 807.
*/

package main

import (
	"fmt"
)

type ListNode struct {
	Val int
    Next *ListNode
}
 
func addTwoNumbers(l1 *ListNode, l2 *ListNode) *ListNode {
	resPre := &ListNode{}
	cur := resPre
	carry := 0

	for l1 != nil || l2 != nil || carry > 0 {
		sum := carry

		if l1 != nil {
			sum += l1.Val
			l1 = l1.Next
		}

		if l2 != nil {
			sum += l2.Val
			l2 = l2.Next
		}

		carry = sum / 10

		cur.Next = &ListNode{Val: sum % 10}
		cur = cur.Next
	}
	return resPre.Next
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

func printListNode(ll *ListNode) {
	for l := ll; l != nil; l = l.Next {
		fmt.Println(l.Val)
	}
}

func main() {
	list_a := makeListNode([]int{3, 4, 5})
	list_b := makeListNode([]int{4, 5, 7})

	res := addTwoNumbers(list_a, list_b)

	printListNode(res)
}

