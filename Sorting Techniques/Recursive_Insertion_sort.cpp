#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void Insertion_sort(int arr[], int i, int n)
{
  if (i > n)
  {
    return;
  }
  int j = i;
  while (j > 0 && arr[j - 1] > arr[j])
  {
    int temp = arr[j - 1];
    arr[j - 1] = arr[j];
    arr[j] = temp;
    j--;
  }
  Insertion_sort(arr, i + 1, n);
}

int main()
{
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  printArray(arr, size);
  Insertion_sort(arr, 0, size);
  cout << "Sorted Array: ";
  printArray(arr, size);

  return 0;
}