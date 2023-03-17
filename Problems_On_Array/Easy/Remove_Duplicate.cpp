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

int RemoveDuplicate(int arr[], int n)
{
  int i = 0;
  for (int j = 1; j < n; j++)
  {
    if (arr[j] != arr[i])
    {
      arr[i + 1] = arr[j];
      i++;
    }
  }
  return i + 1;
}

// Remove duplicate element from sorted array
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
  int Index = RemoveDuplicate(arr, n);
  PrintArray(arr, Index);
  return 0;
}