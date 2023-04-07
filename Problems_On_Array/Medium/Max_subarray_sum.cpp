#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // Kadane's Algorithm
  // int sum = 0;
  // int maxi = INT_MIN;
  // for(int i = 0; i <n; i++){
  //   sum += arr[i];
  //   if(sum > maxi){
  //     maxi = sum;
  //   }
  //   if(sum < 0){
  //     sum = 0;
  //   }
  // }
  // if(maxi < 0){
  //   maxi = 0;
  // }
  // cout << "Maximum subarray sum is: " << maxi;

  //print any of those sub-array also
  int sum = 0;
  int maxi = INT_MIN;
  int start = 0, end = 0, ansStart= -1, ansEnd = -1;
  for(int i = 0; i <n; i++){
    if(sum == 0){
      start = i;
    }
    sum += arr[i];
    if(sum > maxi){
      maxi = sum;
      ansStart = start;
      ansEnd = i;
    }
    if(sum < 0){
      sum = 0;
    }
  }
  if(maxi < 0){
    maxi = 0;
  }
  cout << "Maximum subarray sum is: " << maxi << endl;
  for(int i = ansStart; i <= ansEnd; i++){
    cout << arr[i] << " ";
  }
  return 0;
}