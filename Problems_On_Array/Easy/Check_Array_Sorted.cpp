#include <bits/stdc++.h>
using namespace std;

void PrintArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

//check that array is sorted or not
bool CheckArray(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > arr[i - 1])
    {
    }
    else
    {
      return false;
    }
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  PrintArray(arr, n);
  if (CheckArray(arr, n) == true)
  {
    cout << "Array is sorted";
  }
  else{
    cout << "Array is not sorted";
  }
  return 0;
}