
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

bool isPairWithSumX(int arr[], int n, int x){
    unordered_set<int> s;
    for(int i=0; i<n; i++){
        if(s.count(x-arr[i])) return true;
        s.insert(arr[i]);
    }
    return false;
}
int main()
{
    int arr[] = {3, 8, 4, 7, 6, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << isPairWithSumX(arr, n, 14);
    return 0;
}


