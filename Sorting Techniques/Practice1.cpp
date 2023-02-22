#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int size)
{
  cout << "Array is: ";
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

// stable selection sort
void Selection_sort(int arr[], int size)
{
  int min;
  for (int i = 0; i < size - 1; i++)
  {
    min = i;
    // cout << "Min in i loop: " << min << endl;
    for (int j = i + 1; j < size; j++)
    {
      if (arr[min] > arr[j])
      {
        min = j;
      }
      // cout << "Min in j loop: " << min << endl;
    }
    int key = arr[min];
    // cout << "Value of key is: " << key << endl;
    for (int k = min; k > i; k--)
    {
      arr[k] = arr[k - 1];
    }
    arr[i] = key;
    // cout << endl;
    // printarray(arr, size);
  }
}

int main()
{
  int n;
  cout << "Enter array length: ";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    // cout << (i + 1) << ": ";
    cin >> arr[i];
  }
  printarray(arr, n);
  Selection_sort(arr, n);
  // cout << endl;
  cout << endl << "Sorted ";
  printarray(arr, n);
  return 0;
}