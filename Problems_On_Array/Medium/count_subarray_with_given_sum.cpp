#include <bits/stdc++.h>
using namespace std;

int main()
{

  map<int, int> mpp;
  int preSum = 0;
  int cnt = 0;
  int n;
  cin >> n;
  int k;
  cin >> k;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  cout << endl;
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  cout << endl;
  mpp[0] = 1;
  for (int i = 0; i < n; i++)
  {
    preSum += arr[i];
    int remove = preSum - k;
    cnt += mpp[remove];
    mpp[preSum] += 1;
  }
  cout << "Number of Subarray with given sum is: " << cnt;
  return 0;
}