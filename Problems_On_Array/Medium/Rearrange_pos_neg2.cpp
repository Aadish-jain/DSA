#include <bits/stdc++.h>
using namespace std;

// Rearrange Array Elements by Sign
// Given an unsorted array Arr of N positive and negative numbers. Your task is to create an array of alternate positive and negative numbers without changing the relative order of positive and negative numbers.
// Note: Array should start with a positive number. and show the leftover element at last
// input arr = [3,1,-2,5,-7,9,11,-8]
// output ans = [3,-2,1,-7,5,-8,9,11]

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  vector<int> pos, neg;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] >= 0)
    {
      pos.push_back(arr[i]);
    }
    else
    {
      neg.push_back(arr[i]);
    }
  }
  if (pos.size() > neg.size())
  {
    for (int i = 0; i < neg.size(); i++)
    {
      arr[2 * i] = pos[i];
      arr[2 * i + 1] = neg[i];
    }
    int index = neg.size() * 2;
    for (int i = neg.size(); i < pos.size(); i++)
    {
      arr[index] = pos[i];
      index++;
    }
  }
  else
  {
    for (int i = 0; i < pos.size(); i++)
    {
      arr[2 * i] = pos[i];
      arr[2 * i + 1] = neg[i];
    }
    int index = pos.size() * 2;
    for (int i = pos.size(); i < neg.size(); i++)
    {
      arr[index] = neg[i];
      index++;
    }
  }

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}