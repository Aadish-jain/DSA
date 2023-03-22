#include <bits/stdc++.h>
using namespace std;

void PrintArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void LeftRotate_one(int arr[], int n)
{
  int temp = arr[0];
  for (int i = 1; i < n; i++)
  {
    arr[i - 1] = arr[i];
  }
  arr[n - 1] = temp;
  cout << "Array left rotated by one place is: ";
  PrintArray(arr, n);
}

void RightRotate_one(int arr[], int n)
{
  int temp = arr[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    arr[i + 1] = arr[i];
  }
  arr[0] = temp;
  cout << "Array right rotated by one place is: ";
  PrintArray(arr, n);
}

void Reverse(int arr[], int start, int end)
{
  // int start = 0;
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void LeftRotate_D(int arr[], int d, int n)
{
  Reverse(arr, 0, d - 1);
  Reverse(arr, d, n - 1);
  Reverse(arr, 0, n - 1);
  PrintArray(arr, n);
}

void RightRotate_D(int arr[], int d, int n)
{
  Reverse(arr, 0, n - d - 1);
  Reverse(arr, n - d, n - 1);
  Reverse(arr, 0, n - 1);
  PrintArray(arr, n);
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
  PrintArray(arr, n);

  // // Left Rotate an array by one place
  // LeftRotate_one(arr, n);

  // // Right Rotate an array by one place
  // RightRotate_one(arr, n);

  // // Left Rotate an array by D place
  int d;
  cout << "Enter value of D: ";
  cin >> d;
  // LeftRotate_D(arr, d, n);

  // Right Rotate an array by D place

  // cout <<  "Enter value of D: ";
  // cin >> d;
  RightRotate_D(arr, d, n);

  return 0;
}
