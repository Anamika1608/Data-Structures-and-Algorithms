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

node* insertHead(node* head , int element){
    node*temp = new node(element , head) ;
    return temp;
};

node* insertTail(node*head , int element){
    if(head == NULL) return new node(element);
    node*temp = head;
    node* newElement = new node(element);
    while(temp->next != nullptr){    
        temp = temp->next;
    };
    temp->next = newElement ;
    return head;
}

node* insertKElement(node* head , int k , int length , int element){
    if(head == NULL ) return new node(element);
    if(k<0 || k>length) return head;
    if(k==0) {
        node* newNode = new node(element , head);
        return newNode;
    }
    int count = 0;
    node* temp = head;
    node* mover = temp;
    while(temp){
        if(count == k) {
            node* newNode = new node(element);
            mover->next = newNode;
            newNode->next = temp;
            return head; 
        }
        count++;
        mover=temp;
        temp = temp->next;
    };
    return head;
}

// node* insertElement(node* head , int value , int length){
//     if(head == NULL || head->next == nullptr ) return NULL;
//     node* temp = head;
//     if(head->data == value) {
//         head = temp->next;
//         insert temp;
//         return head;
//     }
//     node* mover = temp;
//     while(temp){
//         if(temp->data == value) {
//             mover->next = temp->next;
//             insert temp;  
//             return head; 
//         }
//         mover=temp;
//         temp = temp->next;
//     };
//     return head;
// }

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
    int ele = 99;
    node* head = convert(arr);
    head = insertHead(head , ele);
    printList(head);
    head = insertTail(head , ele);
    printList(head);
    int length = lengthOfLL(head);
    head = insertKElement(head , 9 , length , ele);
    printList(head);
    // head = insertElement(head , 99 , count);
    // printList(head);

}