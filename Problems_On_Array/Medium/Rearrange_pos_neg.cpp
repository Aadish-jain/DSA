#include <bits/stdc++.h>
using namespace std;

// Rearrange Array Elements by Sign
// Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
// Note: Array should start with a positive number.
// input arr = [3,1,-2,5,-7,-8]
// output ans = [3,-2,1,-7,5,-8]

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int ans[n];
  int posIdx = 0;
  int negIdx = 1;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < 0)
    {
      ans[negIdx] = arr[i];
      negIdx += 2;
    }
    else
    {
      ans[posIdx] = arr[i];
      posIdx += 2;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << ans[i] << " ";
  }
  cout << endl;
  return 0;
}