#include <bits/stdc++.h>
using namespace std;

void printarray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void Merge(int arr[], int low, int mid, int high)
{
  vector<int> temp;
  int left = low;
  int right = mid + 1;
  while (left <= mid && right <= high)
  {
    if (arr[left] <= arr[right])
    {
      temp.push_back(arr[left]);
      left++;
    }
    else
    {
      temp.push_back(arr[right]);
      right++;
    }
  }
  while (left <= mid)
  {
    temp.push_back(arr[left]);
    left++;
  }
  while (right <= high)
  {
    temp.push_back(arr[right]);
    right++;
  }

  for (int i = low; i <= high; i++)
  {
    arr[i] = temp[i - low];
  }
}

void Merge_sort(int arr[], int low, int high)
{
  if (low >= high)
  {
    return;
  }
  int mid = (low + high) / 2;
  Merge_sort(arr, low, mid);
  Merge_sort(arr, mid + 1, high);
  Merge(arr, low, mid, high);
}

int main()
{
  int n;
  // number of elements in an array
  cin >> n;
  int arr[n];
  // input array elements
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  printarray(arr, n);
  int low = 0;
  int high = n;
  Merge_sort(arr, low, high);
  cout << "Sorted Array : "<< endl;
  printarray(arr, n);

  return 0;
}