#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  // Given an array A of positive integers. Your task is to find the leaders in the array.
  //  An element of array is leader if it is greater than or equal to all the elements to its right side.
  //  The rightmost element is always a leader.
  vector<int> ans;
  int maxi = INT_MIN;
  for (int i = n - 1; i >= 0; i--)
  {
    if (a[i] >= maxi)
    {
      ans.push_back(a[i]);
    }
    maxi = max(maxi, a[i]);
  }
  reverse(ans.begin(), ans.end()); 
  for (auto it : ans)
  {
    cout << it << " ";
  }
  return 0;
}