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

void Selection_sort(int arr[], int beginIndex, int size)
{
  if (beginIndex > size)
  {
    return;
  }
  int min = beginIndex;
  for(int i = beginIndex; i< size; i++){
    if(arr[i] < arr[min]){
      min = i;
    }
  }
  int temp = arr[min];
  arr[min] = arr[beginIndex];
  arr[beginIndex] = temp;
  Selection_sort(arr, beginIndex+1, size); 
}

void Stable_selection(int arr[], int i, int n)
{
  if(i > n){return;}
  int min = i;
  for(int j = i+1; j< n; j++){
    if(arr[min] > arr[j]){
      min = j;
    }
  }
  int key = arr[min];
  for(int k = min; k > i; k--){
    arr[k] = arr[k-1];
  }
  arr[i] = key;
  Stable_selection(arr, i+1, n);
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
  // Selection_sort(arr, 0, size);
  Stable_selection(arr, 0, size);
  cout << "Sorted Array: ";
  printArray(arr, size);

  return 0;
}