#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
}

void ReverseArray(int arr[], int front, int back)
{
  if (front > back)
  {
    return;
  }
  // int tmp = arr[front];
  // arr[front] = arr[back];
  // arr[back] = tmp;
  // or 
  swap(arr[front], arr[back]);
  ReverseArray(arr, front + 1, back - 1);

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
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  ReverseArray(arr, 0, n - 1);
  cout << endl;
  cout << "Reverse Array: ";
  printarray(arr, n);
  return 0;
}