
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

struct Stack{
    queue<int> q1,q2;
    int stack_size;
    
public:
    Stack(){
        stack_size=0;
    }
    void push(int x){
        stack_size++;
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
    }
    void pop(){
        if(q2.empty()) return;
        q2.pop();
        stack_size--;
    }
    int top(){
        if(q2.empty()) return -1;
        return q2.front();
    }
    int size(){
        return stack_size;
    }
    bool empty(){
        if(stack_size==0) return 1;
        else return 0;
    }
};

int main()
{
    Stack s;
    s.push(5);
    s.push(10);
    s.push(15);
    s.push(20);
    
  
    cout<<"The size of the stack is: "<<s.size()<<endl;
    
    s.pop();
    
    cout<<"The top element of the stack is: "<<s.top()<<endl;
    
    cout<<"The updated size of the stack is: "<<s.size()<<endl;
    
    cout<<"The stack elements are: "<<endl;
    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }

    return 0;
}


