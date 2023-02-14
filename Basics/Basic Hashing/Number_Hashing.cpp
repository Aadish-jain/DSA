#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // for(int i = 0; i < n; i++)
  // {
  //   cout << arr[i] << " ";
  // }

  //pre-compute
  int hash[100001] = {0};
  for(int i = 0; i < n; i++){
    hash[arr[i]] += 1;
  }
  // for(int i = 0; i < 13; i++)
  // {
  //   cout << hash[i] << " ";
  // }
  int q;
  cin >> q;
  while(q--){
    int number;
    cin >> number;
    //fetch
    cout << hash[number]<< endl;
  }

 // using map
 map <int, int> mpp;
 for(int i = 0; i < n; i++)
 {
  mpp[arr[i]]++;
 }

 for (auto it : mpp){
  cout << it.first << "->" << it.second << endl;
 }
  int q1;
  cin >> q1;
  while(q1--){
    int number1;
    cin >> number1;
    //fetch
    cout << mpp[number1]<< endl;
  }
 
 // using unordered_map
 unordered_map <int, int> mpp1;
 for(int i = 0; i < n; i++)
 {
  mpp1[arr[i]]++;
 }

 for (auto it : mpp1){
  cout << it.first << "->" << it.second << endl;
 }
  int q2;
  cin >> q2;
  while(q2--){
    int number2;
    cin >> number2;
    //fetch
    cout << mpp1[number2]<< endl;
  }

  return 0;
}