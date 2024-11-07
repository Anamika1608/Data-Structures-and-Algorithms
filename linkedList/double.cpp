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

// node *convert(vector<int> arr){
//     node *head = new node(arr[0]);
//     node *backer = nullptr;
//     node *mover = head;
//     for(int i=1;i<arr.size();i++){
//         node*temp = new node(arr[i]);
//         mover->next = temp;
//         mover->back = backer;
//         backer = mover;
//         mover = temp;
//     }
//     return head;

// }

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
}

int lengthOfLL(node *head)
{
    int count = 0;
    node *temp = head;
    while (temp)
    {
        temp = temp->next;
        count += 1;
    }
    return count;
};

node *delHead(node *head)
{
    if (head == NULL || head->next == nullptr)
        return NULL;
    node *temp = head;
    temp->back = nullptr;
    head = temp->next;
    delete temp;
    return head;
}

node *delTail(node *head)
{
    if (head == NULL || head->next == nullptr)
        return NULL;
    node *temp = head;
    while (temp->next->next != nullptr)
    {
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head;
}

node *delKEle(node *head, int k, int length)
{
    if (head == NULL || head->next == nullptr)
        return NULL;
    if (k < 0 || k >= length)
        return head;
    node *temp = head;
    if (k == 0)
    {
        head->next->back = nullptr;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;

    while (temp)
    {
        if (count == k)
        {
            if (temp->back != nullptr)
                temp->back->next = temp->next;
            if (temp->next != nullptr)
                temp->next->back = temp->back;
            delete temp;
            return head;
        }
        count++;
        temp = temp->next;
    }
    return head;
}

node *delEle(node *head, int ele, int length)
{
    if (head == NULL || head->next == nullptr)
        return NULL;
    node *temp = head;
    if (head->data == ele)
    {
        head->next->back = nullptr;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;

    while (temp)
    {
        if (temp->data == ele)
        {
            if (temp->back != nullptr)
                temp->back->next = temp->next;
            if (temp->next != nullptr)
                temp->next->back = temp->back;
            delete temp;
            return head;
        }
        count++;
        temp = temp->next;
    }
    return head;
}

node *insertHead(node *head, int ele)
{
    node* temp = new node(ele, head, nullptr);
    return temp;
}

node* insertTail(node* head , int ele){
    if(head == NULL) return new node(ele);
    node* temp = head;
    while(temp->next!=nullptr){
        temp = temp->next;
    }
    node* tail = new node(ele , nullptr , temp);
    temp->next = tail;
    return head;
}

node*insertKEle (node*head , int ele , int k , int length){
      if (head == NULL || head->next == nullptr)
        return NULL;
    if (k < 0 || k >= length)
        return head;
    node *temp = head;
    if (k == 0)
    {
        head->next->back = nullptr;
        head = head->next;
        delete temp;
        return head;
    }
    int count = 0;

    while (temp)
    {
        if (count == k)
        {
            if (temp->back != nullptr)
                temp->back->next = temp->next;
            if (temp->next != nullptr)
                temp->next->back = temp->back;
            delete temp;
            return head;
        }
        count++;
        temp = temp->next;
    }
    return head;
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

int main()
{
    vector<int> arr = {1, 2, 33, 44, 66, 5};
    node *head = convert(arr);
    printList(head);
    head = delHead(head);
    printList(head);
    head = delTail(head);
    printList(head);
    int length = lengthOfLL(head);
    head = delKEle(head, 1, length); // delete element at 1st index
    printList(head);
    head = delEle(head, 2, length);
    printList(head);
    head = insertHead(head, 67);
    printList(head);
    head = insertTail(head, 67);
    printList(head);
    int length = lengthOfLL(head);
    head = insertKEle(head , 67 , 2 , length);
    printList(head);
}