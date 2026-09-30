#include <iostream>
#include <cstdlib>

using namespace std;

struct node{
    int value;
    node* next;
};

node* head = NULL;
node* tail = NULL;


//Insert last
void enqueue(int n){
    node *newnode = new node;
    newnode -> value = n;
    newnode -> next = NULL;
    
    if (head == NULL){
        head = newnode;
        tail = head;
    } else{
        tail -> next = newnode;
        tail = newnode;
    }
}

//Delete first
void dequeue(){
    if(head == NULL){
        cout << "Queue kosong!" << endl;
        return;
    }

    node *temp = head;
    head = head -> next;
    if (head == NULL) tail = NULL;
    delete temp;
}

void display (){
    node *temp = head;
    cout << "Isi Queue (Depan -> Belakang): ";
    while (temp != NULL){
        cout << temp -> value << " -> ";
        temp = temp -> next;
    }
    cout << "NULL" << endl;
}

int main(){
    system ("cls");

    enqueue(10);
    display();
    enqueue(20);
    display();
    enqueue(30);
    display();
    
    cout << endl;
    dequeue();
    display();
    dequeue();
    display();

}