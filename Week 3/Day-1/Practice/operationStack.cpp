#include <iostream>
#include <bits/stdc++.h>


using namespace std;



int main()
{
 stack<int> s;
 s.push(5);
 s.push(10);
 s.push(15);
 s.push(20);
 cout<<"The size of stack is: "<<s.size()<<"\n";
 s.pop();
 while(s.size()>0){
     cout<<s.top()<<" ";
     s.pop();
 }
  return 0;
}