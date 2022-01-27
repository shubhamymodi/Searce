
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

int countDistinct(int arr[], int n){
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        s.insert(arr[i]);
    }
    return s.size();
}
int main()
{
    int arr[6] = {2,4,5,2,8,1};
    
    cout<<countDistinct(arr,6);  

    return 0;
}


