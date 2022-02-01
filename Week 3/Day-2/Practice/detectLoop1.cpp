
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

bool isLoop(Node *head){
    unordered_set<Node *> s;
    Node *curr = head;
    while(curr!=NULL){
        if(s.count(curr)) return true;
        s.insert(curr);
        curr=curr->next;
    }
    return false;
}

int main()
{
  Node *head = new Node(10);
  head->next = new Node(20);
  head->next->next = new Node(30);
  head->next->next->next = new Node(40);
  head->next->next->next->next = new Node(50);
  head->next->next->next->next->next = head;
  
  cout<<isLoop(head);
  return 0;
}


