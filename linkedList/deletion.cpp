#include <bits/stdc++.h>
using namespace std;

class node {
    public :
    int data ;
    node* next;
    node(int data1 , node* next1){
        data = data1;
        next = next1;
    };
    node(int data1){
        data = data1;
        next = nullptr;
    };
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

node* deleteHead(node* head){
    if(head == NULL) return head;
    node*temp = head;
    head = temp->next;
    delete temp;
    return head;
};

node* deleteTail(node*head){
    if(head == NULL || head->next == nullptr) return NULL;

    node* temp = head;
    while(temp->next->next != nullptr){    
        temp = temp->next;
    };
    temp->next = nullptr ;
    delete(temp->next) ;
    return head;
}

node* deleteKElement(node* head , int k , int length){
    if(head == NULL || head->next == nullptr || k<0 || k>length) return NULL;
    int count = 0;
    node* temp = head;
    if(k==0) {
        head = temp->next;
        delete temp;
        return head;
    }
    node* mover = temp;
    while(temp){
        if(count == k) {
            mover->next = temp->next;
            delete temp;  
            return head; 
        }
        count++;
        mover=temp;
        temp = temp->next;
    };
    return head;
}

node* deleteElement(node* head , int value , int length){
    if(head == NULL || head->next == nullptr ) return NULL;
    node* temp = head;
    if(head->data == value) {
        head = temp->next;
        delete temp;
        return head;
    }
    node* mover = temp;
    while(temp){
        if(temp->data == value) {
            mover->next = temp->next;
            delete temp;  
            return head; 
        }
        mover=temp;
        temp = temp->next;
    };
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

int main(){
    vector<int> arr = {15,26,3,4,57};
    node* head = convert(arr);
    int count = lengthOfLL(head);
    // head = deleteHead(head);
    // printList(head);
    // head = deleteTail(head);
    // printList(head);
    // head = deleteKElement(head , 0 , count);
    // printList(head);
    head = deleteElement(head , 99 , count);
    printList(head);

}