
#include <iostream>
#include <bits/stdc++.h>


using namespace std;

bool isSorted(int arr[],int n){
    for(int i=1; i<n; i++){
        if(arr[i]<arr[i-1]) return false;
    }
    return true;
}

int main()
{
  int arr[4] = {8,10,10,12};
  bool res = isSorted(arr,4);
  cout<<res;
}