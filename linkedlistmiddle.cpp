#include <bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node* next;
    Node(int value):data(value),next(nullptr){}
};

Node* findMiddleNode(Node* head) {
    if (head == nullptr) {
        return nullptr;
    }
    Node* slow = head;
    Node* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

bool findCycle(Node* head){    
    Node* slow = head;
    Node* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }    
    return false;
}

bool findCycle(Node* head){    
    Node* slow = head;
    Node* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }    
    return false;
}

void insertNode(Node** head, int value) {
    Node* newNode = new Node(value);
    if (*head == nullptr) {
        *head = newNode;
        newNode->next = *head; // Create a cycle
    }else{
        Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head; // Create a cycle
    }
}bool findCycle(Node* head){    
    Node* slow = head;
    Node* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }    
    return false;
}

void insertNode(Node** head, int value) {
    Node* newNode = new Node(value);
    if (*head == nullptr) {
        *head = newNode;
        newNode->next = *head; // Create a cycle
    }else{
        Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head; // Create a cycle
    }
}bool findCycle(Node* head){    
    Node* slow = head;
    Node* fast = head;
    while (fast->next != nullptr && fast->next->next != nullptr){
        slow = slow->next;
        fast = fast->next->next;
        if(slow==fast){
            return true;
        }
    }    
    return false;
}

void insertNode(Node** head, int value) {
    Node* newNode = new Node(value);
    if (*head == nullptr) {
        *head = newNode;
        newNode->next = *head; // Create a cycle
    }else{
        Node* temp = *head;
        while (temp->next != *head) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->next = *head; // Create a cycle
    }
}

void printList(Node* head) {
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int numNodes;    
    cout << "Enter the number of nodes: ";
    cin >> numNodes;    
    for (int i = 0; i < numNodes; i++) {
        int value;
        cout << "Enter node " << i + 1 << " value: ";
        cin >> value;
        insertNode(&head, value);
    }
    cout << "Linked List: ";
    printList(head);
    Node* middleNode = findMiddleNode(head);
    if (middleNode != nullptr) {
        cout << "Middle node value: " << middleNode->data << endl;
    } else {
        cout << "List is empty." << endl;
    }

    if(findCycle(head)==true){
        cout<<"cycle present";
    }
    else{
        cout<<"no cycle";
    }
    return 0;
}