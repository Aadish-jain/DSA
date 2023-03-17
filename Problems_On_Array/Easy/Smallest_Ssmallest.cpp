#include <bits/stdc++.h>
using namespace std;

void PrintArray(int a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
  cout << endl;
}

void SmallestElement(int arr[], int n)
{
  int smallest = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] < smallest)
    {
      smallest = arr[i];
    }
  }
  cout << "Smallest element of array is: " << smallest;
}

void SecondSmallestElement(int arr[], int n)
{
  int smallest = arr[0];
  int ssmallest = INT_MAX;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] < smallest)
    {
      ssmallest = smallest;
      smallest = arr[i];
    }
    else if (arr[i] > smallest && arr[i] < ssmallest)
    {
      ssmallest = arr[i];        
    }
  }
  if (ssmallest == INT_MAX)  // if all element is same [2 2 2 2 2]
  {
    ssmallest = smallest;
  }
  cout << "Second Smallest element of array is: " << ssmallest;
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
  SmallestElement(arr, n);
  cout << endl;
  SecondSmallestElement(arr, n);
  return 0;
}