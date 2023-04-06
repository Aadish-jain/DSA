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

  // Moore's voting algorithm
  int cnt = 0;
  int el;
  for (int i = 0; i < n; i++)
  {
    if (cnt == 0)
    {
      cnt = 1;
      el = arr[i];
    }
    else if (arr[i] == el)
    {
      cnt++;
    }
    else
    {
      cnt--;
    }
  }
  int cnt1 = 0;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == el)
    {
      cnt1++;
    }
  }
  if (cnt1 > n / 2)
  {
    cout << "Majority element is: " << el << " Number of times is: " << cnt1 << endl;
    // return;
  }
  else
  {
    cout << "No Majority element available";
  }
  return 0;
}