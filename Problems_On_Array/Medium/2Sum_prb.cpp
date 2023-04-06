#include <bits/stdc++.h>
using namespace std;

void Brute_force(int arr[], int n, int target)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] + arr[j] == target)
      {
        cout << "Yes" << endl;
        cout << i << " " << j << endl;
        cout << arr[i] << " " << arr[j] << endl;
        return;
      }
    }
  }
  cout << "No" << endl;
}

void Better(int arr[], int n, int target)
{
  map<int, int> mpp;
  for (int i = 0; i < n; i++)
  {
    int num = target - arr[i];
    if (mpp.find(num) != mpp.end())
    {
      cout << mpp[num] << " " << i <<endl;
      cout << num << " " << arr[i];
      return;
    }
    mpp[arr[i]] = i;
  }
  cout << -1 << -1;
}

void Optimal(int arr[], int n, int target){
  int left = 0;
  int right = n-1;
  sort(arr, arr+n);
  while(left < right){
    int sum = arr[left] + arr[right];
    if(sum == target){
      cout <<  "Yes" << endl;
      return;
    }
    else if(sum < target)
    {
      left++;
    }
    else{
      right--;
    }
  }
  cout << "No";
}

int main()
{
  int n;
  cin >> n;
  int target;
  cin >> target;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // Brute_force(arr, n, target);
  // Better(arr, n, target);
  Optimal(arr, n, target);
  return 0;
}