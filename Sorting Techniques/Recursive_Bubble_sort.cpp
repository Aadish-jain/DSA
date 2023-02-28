#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void Bubble_sort(int arr[], int n)
{
  if (n == 0)   // Base Case
  {
    return;
  }
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > arr[i + 1])
    {
      int temp = arr[i];
      arr[i] = arr[i + 1];
      arr[i + 1] = temp;
    }
  }
  Bubble_sort(arr, n - 1);
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

  printarray(arr, n);

  Bubble_sort(arr, n);
  cout << "Sorted Array is: ";
  printarray(arr, n);
  return 0;
}