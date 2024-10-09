//
//  Stack.cpp
//  Data Structures and algorithms
//
//  Created by Rashik Ghosh on 23/09/24.
//

//#include <iostream>
//using namespace std;
//
//void push(int stack[],int max,int &top,int x){
//    if(top>max-1){
//        cout << "Overflow";
//    }
//    else{
//        top++;
//        stack[top]=x;
//        cout << x <<"Pushed inside stack";
//    }
//}
//
//void pop(int stack[],int &top){
//    if (top<0) {
//        cout << "underflow";
//    }
//    else{
//        cout << stack[top]<<"poped from the stack";
//        top--;
//    }
//}
//
//void peek(int stack[],int &top){
//    if (top<0) {
//        cout<<"no element";
//    }
//    else{
//        cout << stack[top];
//    }
//}
//
//void isempty(int stack[],int &top){
//    if (top<0) {
//        cout << "no elements";
//    }
//    else{
//        cout << "present";
//    }
//}
//
//void display(int stack[],int &top){
//    if (top<0) {
//        cout << "no elements";
//    }
//    else{
//        for (int i=top; i>=0; i--) {
//            cout << stack[i]<<" ";
//        }
//    }
//}
//
//int main(){
//    int choice = 0;
//    int top=-1;
//    int max;
//    cout << "enter the size: ";
//    cin >> max;
//    int stack[max];
//    int data;
//    do{
//        cout <<"what do you want to choose: " << endl;
//        cout <<"1. insert an element " << endl;
//        cout <<"2. delete: " << endl;
//        cout <<"3. peek: " << endl;
//        cout <<"4. isempty: " << endl;
//        cout <<"5. display: " << endl;
//        cout <<"6. exit: " << endl;
//        cout <<"enter your choice" <<endl;
//        cin >> choice;
//        
//        switch(choice){
//            case 1:
//                cout << "enter data";
//                cin >> data;
//                push(stack, max, top, data);
//                break;
//            case 2:
//                pop(stack, top);
//                break;
//            case 3:
//                peek(stack, top);
//                break;
//            case 4:
//                isempty(stack, top);
//                break;
//            case 5:
//                display(stack, top);
//                break;
//            case 6:
//                cout << "exiting the stack and displaying the data:";
//                display(stack, top);
//                cout << endl;
//                break;
//            default:
//                cout << "invalid";
//                display(stack, top);
//                cout << endl;
//                break;
//        }
//    }while(choice==1||choice==2||choice==3||choice==4||choice==5);
//}

#include "Linked list.hpp"
struct node{
    int data;
    node*next;
};
node*top=nullptr;
void push(int x){
    node *newNode = new node();
            if (newNode == nullptr) {
                cout << "Overflow" << endl;
                return;
            }
        newNode->data = x;
        newNode->next = top;
        top = newNode;
        cout << x << " pushed inside stack" << endl;
}

void pop(){
    if (top == nullptr) {
            cout << "Underflow" << endl;
            return;
        }
        node *temp = top;
        cout << top->data << " is popped\n";
        top = top->next;
        delete temp;
}

void peek(){
    if (top == nullptr) {
            cout << "Underflow" << endl;
            return;
        }
        cout << top->data << " ";
}

bool isEmpty() {
    return top == nullptr;
}

void displayStack(){
    if (top ==nullptr) {
        cout <<"underflow";
        return;
    }
    else{
        node*temp=top;
        while (temp!=nullptr) {
            cout << temp->data;
            temp=temp->next;
        }
    }
}
int main(){
    int choice, value;
    do{
        cout <<"what do you want to choose: " << endl;
        cout <<"1. insert an element " << endl;
        cout <<"2. delete: " << endl;
        cout <<"3. peek: " << endl;
        cout <<"4. isempty: " << endl;
        cout <<"5. display: " << endl;
        cout <<"6. exit: " << endl;
        cout <<"enter your choice" <<endl;
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push";
                cin >> value;
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                peek();
                break;
            case 4:
                isEmpty();
                break;
            case 5:
                displayStack();
                break;
            case 6:
                cout << "You chose to exit\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    }while(choice != 6);
}
