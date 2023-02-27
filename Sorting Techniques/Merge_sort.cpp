#include<bits/stdc++.h>
using namespace std;

void printarray(vector<int> arr, int n)
{
  cout << "Array is: ";
  for(int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void Merge(vector<int> &arr, int low, int mid, int high)
{
  vector<int> temp;
  int left = low;
  int right = mid+1;

  while(left <= mid && right <= high)
  {
    if(arr[left] <= arr[right]){
      temp.push_back(arr[left]);
      left++;
    }
    else
    {
      temp.push_back(arr[right]);
      right++;
    }
  }
  while(left <= mid){
    temp.push_back(arr[left]);
    left++;
  }
  while(right <= high){
    temp.push_back(arr[right]);
    right++;
  }

  for(int i = low; i <= high; i++){
    arr[i] = temp[i - low];
  }



}

void Merge_sort(vector<int> &arr, int low, int high)
{
  if(low >= high)
  {
    return;
  }
  int mid = (low + high)/ 2;
  Merge_sort(arr, low, mid);
  Merge_sort(arr, mid+1, high);
  Merge(arr, low, mid, high);
}

int main()
{
  int n, a;
  cin >> n;
  vector<int> arr;
  for(int i = 0; i < n; i++)
  {
    cin >> a;
    arr.push_back(a);
  }
  printarray(arr, n);
  int low = 0, high = n-1;
  Merge_sort(arr, low, high);
  printarray(arr, n);
  return 0;
}