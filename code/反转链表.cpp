class Solution {
public:
	ListNode* reverseList(ListNode* head) {
		ListNode *newHead = NULL;
		while (head) {
			ListNode *t = head->next;
			head->next = newHead;
			newHead = head;
			head = t;
		}
		return newHead;
	}
};