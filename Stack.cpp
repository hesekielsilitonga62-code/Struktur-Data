#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;

//Insert First
void push(int n){
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;

    if (head == NULL) {
        head = newnode;
        tail = head;
    }
    else{
        newnode -> next = head;
        head = newnode;
    }
}

//Delete First
void pop(){
    if(head == NULL){
        cout << "Stack kosong!" << endl;
        return;
    }

    node *temp = head;
    head = head -> next;
    if (head == NULL) tail = NULL;
    delete temp;
}

void display (){
    node *temp = head;
    cout << "Isi Stack (Atas -> Bawah): ";
    while (temp != NULL){
        cout << temp -> value << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    system ("cls"); 

    push(10);
    display();
    push(20);
    display();
    push(30);
    display();
    

    cout << endl;
    pop();
    display();
    pop();
    display();

    return 0;
}