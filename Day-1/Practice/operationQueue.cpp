
#include <iostream>
#include <bits/stdc++.h>


using namespace std;



int main()
{
 queue<int> q;
 q.push(5);
 q.push(10);
 q.push(15);
 q.push(20);
 cout<<"The size of stack is: "<<q.size()<<"\n";
 q.pop();
 while(q.size()>0){
     cout<<q.front()<<" ";
     q.pop();
 }
  return 0;
}