#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int data1, node *next1)
    {
        data = data1;
        next = next1;
    };
    node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

node *convert(vector<int> arr)
{
    node *head = new node(arr[0]);
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}

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

bool search(node *head, int element)
{
    node *temp = head;
    while (temp)
    {
        if(temp->data == element) return true;
        temp = temp->next;
    }
    return false;
};

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    node *head = convert(arr);
    printList(head);
    cout << lengthOfLL(head) << endl;
    cout << search(head,4) << endl;
}