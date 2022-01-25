
#include <iostream>
#include <bits/stdc++.h>


using namespace std;


int getMax(stack<int> st){
    return st.top();
}
int main()
{
    stack<int> s;
    stack<int> maximumStack;
    maximumStack.push(0);
    int n;
    cin>>n;
    while(n--){
        int a;
        cin>>a;
        if(a==1){
            int x;
            cin>>x;
            if(x>=maximumStack.top()){
                maximumStack.push(x);
            }
            s.push(x);
        }
        else if(a==2){
            if(s.top()==maximumStack.top()) maximumStack.pop();
            s.pop();
        }
        else if(a==3){
            cout<<getMax(maximumStack)<<endl;
            
        }
        
    }
    
    
    

    return 0;
}


