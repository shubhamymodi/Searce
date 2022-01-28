#include <bits/stdc++.h>
using namespace std;

bool ZeroSumSubarray(int arr[], int n)
{
    unordered_set<int> s;
    int prefix_sum = 0;
    s.insert(0);
    for(int i = 0; i < n; i++)
    {
        prefix_sum += arr[i];
        if(s.count(prefix_sum))
          return true;
        s.insert(prefix_sum);
    }
    return false;
    
}

int main()
{
    int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout << ZeroSumSubarray(arr, n);
}