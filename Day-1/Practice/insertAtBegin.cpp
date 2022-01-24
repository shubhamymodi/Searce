
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};
void printList(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

Node *insertBegin(Node *head,int x){
    Node *temp=new Node(x);
    temp->next=head;
    return temp;
    
}

int main()
{
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head = insertBegin(head, 5);
  printList(head);
  return 0;
}