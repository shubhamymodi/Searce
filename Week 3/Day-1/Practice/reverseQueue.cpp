
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void reverseQueue(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        s.push(q.front());
        q.pop();
    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }
}

int main()
{
 queue<int> q;
 q.push(5);
 q.push(10);
 q.push(15);
 q.push(20);
 reverseQueue(q);
 while(!q.empty()){
     cout<<q.front()<<" ";
     q.pop();
}
  return 0;
}