/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == NULL || head->next == NULL)
            return false;
        ListNode* slow = head;
        ListNode* fast = head;
        while (slow!=fast) {
            if(fast->next == NULL || fast->next->next != NULL) return false;
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};



class Solution {
  public:
    // Function to find the length of a loop in the linked list.
    int countNodesinLoop(Node *head) {
       if (head == NULL || head->next == NULL)
            return 0;
        if(head->next->next == NULL) return 0;
        if(c==0) return 0;
        int count = 1;
        Node* start = NULL;
        Node*temp = head;
        while(temp!=start) {
            if(count == c) {
                start = temp;
            }
            count+=1;
            temp = temp->next;
        }
        return count-c;
    }
};