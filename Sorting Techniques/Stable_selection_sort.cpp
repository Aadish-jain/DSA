#include <bits/stdc++.h>
using namespace std;

void printArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
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
  printArray(arr, n);
  int min;

  for (int i = 0; i < n - 1; i++)
  {
    min = i;
    cout << "Min is: " << min << endl;
    // printArray(arr, n);

    for (int j = i + 1; j < n; j++)
    {
      if (arr[min] > arr[j])
        {min = j;}
    }
      int key = arr[min];
      for (int k = min; k > i; k--)
        arr[k] = arr[k - 1];
        arr[i] = key;
    }
  printArray(arr, n);
  return 0;
}