#include <bits/stdc++.h>
using namespace std;

void PrintArray(vector<int> &arr)
{

  for (auto it : arr)
  {
    cout << it << " ";
  }
}

vector<int> Move_Zero_End(vector<int> &arr, int n)
{
  // 2pointer approach
  int j = -1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
    {
      j = i;
      break;
    }
  }
  if (j == -1)
  {
    return arr;
  }

  for (int i = j + 1; i < n; i++)
  {
    if (arr[i] != 0)
    {
      swap(arr[i], arr[j]);
      j++;
    }
  }
}

vector<int> Move_Zero_Front(vector<int> &arr, int n)
{
  int j = -1;
  for (int i = 0; i <= n; i++)
  {
    if (arr[i] != 0)
    {
      j = i;
      break;
    }
  }
  if (j == -1)
  {
    return arr;
  }

  for (int i = j + 1; i <= n; i++)
  {
    if (arr[i] == 0)
    {
      swap(arr[i], arr[j]);
      j++;
    }
  }
}

int main()
{
  int n, num;
  cin >> n;
  vector<int> arr;
  for (int i = 0; i < n; i++)
  {
    cin >> num;
    arr.push_back(num);
  }
  // Move all zeros to the end of the array
  Move_Zero_End(arr, n);
  PrintArray(arr);
  cout << endl;
  // Move all zeros to the front of the array
  Move_Zero_Front(arr, n);
  PrintArray(arr);
  return 0;
}