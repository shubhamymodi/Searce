
#include <bits/stdc++.h>


using namespace std;

void reverseArray(int arr[],int n){
    int low=0, high=n-1;
    while(low<high){
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    
}

int main()
{
  int q;
  cin>>q;
  int p[q];
  for(int i=0; i<q; i++){
      int temp;
      cin>>temp;
      p[i] = temp;
  }
  reverseArray(p,q);
  for(int i=0; i<q; i++){
      cout<<p[i]<<" ";
      
  }
  return 0;
  
}