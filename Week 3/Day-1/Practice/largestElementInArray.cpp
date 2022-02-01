#include <bits/stdc++.h>
using namespace std;

int largestElementInArray(int arr[],int n){
    int res=0;
    for(int i=1; i<n; i++){
        if(arr[i]>arr[res]) res=i;
    }
    return res;
}
int main()
{
  int arr[5] = {5,8,20,12};
  int ans = largestElementInArray(arr,5);
  cout<<"The largest element of the array is: "<<ans;


}