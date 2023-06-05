// 3 Sum : Find triplets that add up to a zero
//  Problem Statement: Given an array of N integers,
//  your task is to find unique triplets that add up to
//  give a sum of zero. In short, you need to
//  return an array of all the unique triplets
//  [arr[a], arr[b], arr[c]] such that i!=j, j!=k, k!=i,
//  and their sum is equal to zero.

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> Brute_Sum3Prb(int arr[], int n)
{
  set<vector<int>> st;
  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; k < n; k++)
      {
        if (arr[i] + arr[j] + arr[k] == 0)
        {
          vector<int> temp = {arr[i], arr[j], arr[k]};
          sort(temp.begin(), temp.end());
          st.insert(temp);
        }
      }
    }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

vector<vector<int>> Better_Sum3Prb(int arr[], int n)
{
  set<vector<int>> st;
  for (int i = 0; i < n; i++)
  {
    set<int> hashset;
    for (int j = i + 1; j < n; j++)
    {
      int third = -(arr[i] + arr[j]);
      if (hashset.find(third) != hashset.end())
      {
        vector<int> temp = {arr[i], arr[j], third};
        sort(temp.begin(), temp.end());
        st.insert(temp);
      }
      hashset.insert(arr[j]);
    }
  }
  vector<vector<int>> ans(st.begin(), st.end());
  return ans;
}

vector<vector<int>> Optimal_Sum3Prb(int arr[], int n)
{
  sort(arr, arr + n);
  vector<vector<int>> ans;
  for (int i = 0; i < n; i++)
  {
    if (i > 0 && arr[i] == arr[i - 1])
    {
      continue;
    }
    else
    {
      int j = i + 1;
      int k = n - 1;
      while (j < k)
      {
        int sum = arr[i] + arr[j] + arr[k];
        if (sum < 0)
        {
          j++;
        }
        else if (sum > 0)
        {
          k--;
        }
        else
        {
          vector<int> temp = {arr[i], arr[j], arr[k]};
          ans.push_back(temp);
          j++;
          k--;
          while (j < k && arr[j] == arr[j - 1])
          {
            j++;
          }
          while (j < k && arr[k] == arr[k + 1])
          {
            k--;
          }
        }
      }
    }
  }
  return ans;
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
  vector<vector<int>> ans;
  // ans = Brute_Sum3Prb(arr, n);
  // ans = Better_Sum3Prb(arr, n);
  ans = Optimal_Sum3Prb(arr, n);
  for (int i = 0; i < ans.size(); i++)
  {
    for (int j = 0; j < ans[0].size(); j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}