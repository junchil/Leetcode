
"""

Given a linked list, determine if it has a cycle in it.

Follow up:
Can you solve it without using extra space?

"""

class Solution(object):
	def hasCycle(self, head):
		if head == None or head.next == None:
			return False

		fast = head
		slow = head

		while fast and fast.next:
			slow = slow.next
			fast = fast.next.next
			if fast == slow:
				return True
			else:
				continue
		return False



