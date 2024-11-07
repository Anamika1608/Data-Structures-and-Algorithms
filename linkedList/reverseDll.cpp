#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node *back;
    node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
    node(int data1, node *next1, node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
};

void printList(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
};

node *convert(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *prev = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
};
// brute force - can also include the stack push and pop operation 
node *reverseLL(node *head)
{
    if (head == NULL || head->next == nullptr)
        return head;

    node *temp = head->next;
    node *prev = head;
    prev->next = nullptr;
    prev->back = temp;
    prev = temp;
    temp = temp->next;

    while (temp)
    {
        prev->next = temp->back->back;
        prev->back = temp;
        prev = temp ;
        temp = temp->next;
    }
    prev->next = prev->back;
    prev->back = nullptr;
    return prev;
};

// optimised approach

node *reverseLL(node *head)
{
    if (head == NULL || head->next == nullptr)
        return head;

    node* current  = head;
    node* newHead = NULL;
    while(current !=  NULL){
        swap(current->back , current->next);
        newHead = current;
        current = current->back;
    }
    return newHead;
};


int main()
{
    vector<int> arr = {1, 2, 33, 44, 66, 5};
    // 1 ka next = nullptr , 1 ka back 2 hoga
    // reverse - {5 , 66 , 44 , 33 , 2 , 1}
    node *head = convert(arr);
    head = reverseLL(head);
    printList(head);
}