//
//  Linked list.cpp
//  Data Structures and algorithms
//
//  Created by Rashik Ghosh on 09/09/24.
//

//#include "Linked list.hpp"
//struct node
//{
//    public:
//    int data;
//    node* next;
//
//    public:
//    node(int data1, node* next1){
//        data=data1;
//        next=next1;
//    }
//};
//
//int main(){
//    vector<int>arr={2, 5, 8, 7};
//    node* y = new node(arr[0], nullptr);
//    cout << y->next<<endl;
//    cout << y->data << endl;
//    cout << y;
//}


//basic operations in linked list

//#include "Linked list.hpp"
//
//struct node {
//int data;
//node* next;
//};
//
//// Function to append node at the end of the list
//void appendNode(node*& head, int data) {
//node* newNode = new node();
//newNode->data = data;
//newNode->next = nullptr;
//if (head == nullptr) {
//head = newNode;
//} else {
//node* temp = head;
//while (temp->next != nullptr) {
//temp = temp->next;
//}
//temp->next = newNode;
//}
//}
//
//// Function to append node at the beginning of the list
//void appendNodeAtBeginning(node*& head, int data) {
//node* newNode = new node();
//newNode->data = data;
//newNode->next = head; // Corrected this line
//head = newNode;
//}
//
//// Function to append node at a specific position
//void appendNodeAtChoice(node*& head, int data, int pos) {
//if (pos <= 0) {
//cout << "Invalid position!" << endl;
//return;
//}
//
//node* newNode = new node();
//newNode->data = data;
//
//if (pos == 1) {
//newNode->next = head;
//head = newNode;
//return;
//}
//
//node* temp = head;
//for (int i = 1; i < pos - 1 && temp != nullptr; i++) {
//temp = temp->next;
//}
//
//if (temp == nullptr) {
//cout << "Position out of range!" << endl;
//delete newNode; // Free the memory as the position is invalid
//return;
//}
//
//newNode->next = temp->next;
//temp->next = newNode;
//}
//
//// Function to print the linked list
//void printlist(node* head) {
//node* temp = head;
//cout << "Updated list: ";
//while (temp != nullptr) {
//cout << temp->data << " ";
//temp = temp->next;
//}
//cout << endl;
//}
//
//int main() {
//int n;
//cout << "Enter how many elements you want to enter: ";
//cin >> n;
//
//node* head = nullptr;
//int data;
//
//for (int i = 0; i < n; i++) {
//cout << "Enter the data element: ";
//cin >> data;
//appendNode(head, data);
//}
//
//printlist(head);
//
//cout << "Enter the element to insert at the beginning: ";
//int key;
//cin >> key;
//appendNodeAtBeginning(head, key);
//printlist(head);
//
//int k, pos;
//cout << "Enter the position in which you want to insert: ";
//cin >> pos;
//cout << "Enter the element which you want to insert: ";
//cin >> k;
//appendNodeAtChoice(head, k, pos);
//printlist(head);
//
//return 0;
//}

// Implementation of grounded header linked list

//#include<iostream>
//using namespace std;
//
//struct node {
//    int data;
//    node*next;
//};
//
//node *initaialiseHeader(){
//    node*header= new node();
//    header->data=0;
//    header->next=nullptr;
//    return header;
//}
//
//void appendNode(node*header,int data){
//    node*newnode=new node();
//    newnode->data=data;
//    newnode->next=nullptr;
//    node*temp=header;
//    while (temp->next!=nullptr) {
//        temp=temp->next;
//    }
//    temp->next=newnode;
//    header->data++;
//}
//
//void appendNodeAtBeginning(node*header,int data){
//    node*newnode=new node();
//    newnode->data=data;
//    newnode->next=header->next;
//    header->next=newnode;
//    header->data++;
//}
//
//void appendNodeAtChoice(node*header,int pos,int data){
//    node*newnode=new node();
//    newnode->data=data;
//    newnode->next=nullptr;
//    node *temp=header->next;
//    for (int i=1; i<pos-1 && temp->next!=nullptr; i++) {
//        temp=temp->next;
//    }
//    
//    if (temp->next==nullptr) {
//        cout<<"Invalid postion";
//        return;
//    }
//    if (pos==1) {
//        newnode->next=header->next;
//        header->next=newnode;
//        header->data++;
//    }
//    newnode->next=temp->next;
//    temp->next=newnode;
//    header->data++;
//}
//
//void printList(node*header){
//    node*temp=header;
//    while (temp!=nullptr) {
//        cout<<temp->data<<" ";
//        temp=temp->next;
//    }
//}
//
//int main(){
//    node*header=initaialiseHeader();
//    int n;
//    cout << "enter the numbr if nodes you want to insert: ";
//    cin >> n;
//    int data;
//    for (int i=0; i<n; i++) {
//        cin>>data;
//        appendNode(header, data);
//    }
//    printList(header);
//    cout << endl;
//    int value;
//    cout << "enter the value you want to insert: ";
//    cin>>value;
//    appendNodeAtBeginning(header, value);
//    cout<<endl;
//    int postion,key;
//    cout << "enter the postion you want to insert: ";
//    cin>>postion;
//    cout << "enter the key: ";
//    cin>>key;
//    appendNodeAtChoice(header, postion, key);
//    printList(header);
//    cout<<endl;
//    return 0;
//}
//
