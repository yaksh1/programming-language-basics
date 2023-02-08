#include <iostream>
using namespace std;

class node{
  public:
    int data;
    node *next;

    node(int value){
      data = value;
      next = NULL;
    }
};

// inserting at tail
void insertAtTail(node* &head,int value){

    node *n = new node(value);

    //if there are zero nodes that is head doesn't exist
    if(head==NULL){
      head = n;
      return;
    }

    //traverse
    node *temp = head;
    while(temp->next!=NULL){
      temp = temp->next;
    }
    temp->next = n; // insert
}

//inserting at head
void insertAtHead(node* &head,int value){
    node *n=new node(value);
    n->next = head;
    head = n;
}

//searching the linked list
bool search(node *head,int target){
    node *temp = head;
    while(temp!=NULL){
      if(temp->data==target){
        return true;
      }
      temp = temp->next;
    }
    return false;
}

    void display(node *head)
{
    node *temp = head;
    //traverse and print
    while(temp!=NULL){
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main(){

    node *head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtHead(head, 4);
    display(head);
    cout << search(head, 3) << endl;
    cout << search(head, 5) << endl;
    return 0;
}