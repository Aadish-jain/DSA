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
  next_permutation(arr, arr + n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }

  // OR
  int index = -1;
  for (int i = n - 2; i >= 0; i--)
  {
    if (arr[i] < arr[i + 1])
    {
      index = i;
      break;
    }
  }
  if (index == -1)
  {
    reverse(arr, arr + n);
  }
  else
  {
    for (int i = n - 1; i > index; i--)
    {
      if (arr[i] > arr[index])
      {
        swap(arr[i], arr[index]);
        break;
      }
    }
    reverse(arr + index + 1, arr + n);
  }
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  return 0;
}