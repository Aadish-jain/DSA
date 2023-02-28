#include <bits/stdc++.h>
using namespace std;

int pIndex(int arr[], int low, int high)
{
  int pivot = arr[low]; // we can choose any pivot element
  int i = low;
  int j = high;
  while (i < j)
  {
    while(arr[i] <= pivot && i <= high - 1){
      i++;
    }
    while(arr[j] > pivot && j >= low + 1){
      j--;
    }
    if(i < j) swap(arr[i], arr[j]);
  }
  swap(arr[low], arr[j]);
  return j;
}


void printArray(int arr[], int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void Quick_sort(int arr[], int low, int high)
{
  if (low < high)
  {
    int partitionIndex = pIndex(arr, low, high);
    Quick_sort(arr, low, partitionIndex - 1);
    Quick_sort(arr, partitionIndex + 1, high);
  }
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
  Quick_sort(arr, 0, size-1);
  cout << "Sorted Array: ";
  printArray(arr, size);

  return 0;
}