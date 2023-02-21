#include <bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void selectionSort(int arr[], int n)
{
  int i, j, min;
  for (i = 0; i < n - 1; i++)
  {
    min = i;
    for (j = i + 1; j < n; j++)
    {
      if (arr[j] < arr[min])
      {
        min = j;
      }
    }
    if (min != i)
    {
      swap(&arr[min], &arr[i]);
    }
  }
}

void printArray(int arr[], int size)
{
  int i;
  for (i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
}

void StableselectionSort(int arr[], int n)
{
  for(int i = 0; i < n-1; i++){
    int min = i;
    for(int j = i + 1; j < n; j++){
      if( arr[min] > arr[j]){ min = j;}
    }
    int key = arr[min];
    for(int k = min; k > 0; k--){
      arr[k] = arr[k - 1];
      arr[i] = key;
    }
  }
}

int main()
{
  int arr[] = {64, 11, 12, 10, 0, 1, 9};
  int n = sizeof(arr) / sizeof(arr[0]);
  selectionSort(arr, n);
  StableselectionSort(arr, n);
  cout << "Sorted array: \n";
  printArray(arr, n);
  return 0;
}