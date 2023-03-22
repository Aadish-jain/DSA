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
  // count maximum consecutive 1s in an array
  int cnt = 0;
  int max_one = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 1)
    {
      cnt++;
      max_one = max(max_one, cnt);
    }
    else
    {
      cnt = 0;
    }
  }
  cout << "Maximum consecutive 1s is: " << max_one;
  return 0;
}