
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

void countFrequency(int arr[], int n){
    unordered_map<int,int> m;
    for(int i=0; i<n; i++){
        m[arr[i]]++;
    }
    for(auto e: m){
        cout<<e.first<<" "<<e.second<<endl;
    }
   
}
int main()
{
    int arr[8] = {2,4,5,2,8,1,2,5};
    
    countFrequency(arr,8);
    return 0;
}


