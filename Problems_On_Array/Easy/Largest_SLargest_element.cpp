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

void LargestElement(int arr[], int n)
{
  int largest = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > largest)
    {
      largest = arr[i];
    }
  }
  cout << "Largest Element in an array is: " << largest;
}

void SecondLargestElement(int arr[], int n)
{
  int largest = arr[0];
  int SecondLargest = INT_MIN;
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > largest)
    {
      SecondLargest = largest;
      largest = arr[i];
    }
    else if(arr[i] < largest && arr[i] > SecondLargest){
      SecondLargest = arr[i];
    }
  }
  cout << "Second Largest Element in an array is: " << SecondLargest;
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
  LargestElement(arr, n);
  cout << endl;
  SecondLargestElement(arr, n);
  return 0;
}