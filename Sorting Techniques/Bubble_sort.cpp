#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

void Bubble_sort(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int didSwap = 0;
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        didSwap = 1;
      }
    }
    if(didSwap == 0){
      break;
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
  Bubble_sort(arr, n);
  cout << endl;
  printarray(arr, n);

  return 0;
}