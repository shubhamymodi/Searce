
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

Node *insertAtNth(Node *head, int data, int n){
    Node *temp = new Node(data);
    if(n==1){
        temp->next=head;
        return temp;
    }
    Node *curr = head;
    for(int i=1; i<=n-2 && curr!=NULL; i++){
        curr=curr->next;
    }
    if(curr==NULL) return head;
    
    temp->next = curr->next;
    curr->next = temp;
    
    return head;
}

void printLL(Node *head){
    Node *curr = head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }
}

int main()
{
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  
  cout<<"Before insertion, the list is: "<<endl;
  printLL(head);
  cout<<endl;
  insertAtNth(head, 15, 2);
  cout<<"After insertion, the list is: "<<endl;
  printLL(head);
  return 0;
}


