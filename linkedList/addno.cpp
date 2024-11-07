class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        int sum = l1->val + l2->val;
        ListNode* dummyHead = new ListNode();
        if (sum < 10)
            dummyHead->val = sum;
        else {
            carry = sum / 10;
            dummyHead->val = sum % 10;
        }
        l1 = l1->next;
        l2 = l2->next;
        ListNode* mover = dummyHead;
        while (l1 != NULL || l2 != NULL) {
            int val1 = (l1 != NULL) ? l1->val : 0;
            int val2 = (l2 != NULL) ? l2->val : 0;
            int sum = val1 + val2 + carry;
            int value = 0;
            if (sum < 10) {
                value = sum;
                carry = 0;
            } else {
                carry = sum / 10;
                value = sum % 10;
            }
            ListNode* current = new ListNode(value);
            mover->next = current;
            mover = current;
            (l1 != NULL) ? l1 = l1->next : l1;
            (l2 != NULL) ? l1 = l2->next : l2;
        };
        if (carry > 0) {
            ListNode* current = new ListNode(carry);
            mover->next = current;
        }
        return dummyHead;
    }
};