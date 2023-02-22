#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void Insertion_sort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      int temp = arr[j];
      arr[j] = arr[j - 1];
      arr[j - 1] = temp;
      j--;
    }
  }
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
  Insertion_sort(arr, n);
  cout << endl;
  printarray(arr, n);
  return 0;
}