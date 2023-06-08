#include <bits/stdc++.h>
using namespace std;

// Given an array of N integers.
// Find the elements that appear more than N/3 times in the array.
// If no such element exists, return an empty vector.

int main()
{
  int N;
  cin >> N;
  int arr[N];
  for (int i = 0; i < N; i++)
  {
    cin >> arr[i];
  }
  // Brute-force solution
  // vector<int> ls;
  // for (int i = 0; i < N; i++)
  // {
  //   if (ls.size() == 0 || ls[0] != arr[i])
  //   {
  //     int cnt = 0;
  //     for (int j = 0; j < N; j++)
  //     {
  //       if (arr[i] == arr[j])
  //       {
  //         cnt++;
  //       }
  //     }
  //     if (cnt > (N / 3))
  //     {
  //       ls.push_back(arr[i]);
  //     }
  //   }
  //   if (ls.size() == 2)
  //   {
  //     break;
  //   }
  // }
  // for (int i = 0; i < ls.size(); i++)
  // {
  //   cout << ls[i] << " ";
  // }

  // Better Solution using Hashing(Hashmap/Map)
  // vector<int> ls1;
  // map<int, int> mpp;
  // int mini = int(N / 3) + 1;
  // for (int i = 0; i < N; i++)
  // {
  //   mpp[arr[i]]++;
  //   if (mpp[arr[i]] == mini)
  //   {
  //     ls1.push_back(arr[i]);
  //   }
  //   if (ls1.size() == 2)
  //   {
  //     break;
  //   }
  // }
  // for (int i = 0; i < ls1.size(); i++)
  // {
  //   cout << ls1[i] << " ";
  // }

  // Optimal Solution- Boyer Moore's Voting Algorithm
  int cnt1 = 0, cnt2 = 0;
  int el1 = INT_MIN, el2 = INT_MIN;
  for (int i = 0; i < N; i++)
  {
    if (cnt1 == 0 && el2 != arr[i])
    {
      cnt1 = 1;
      el1 = arr[i];
    }
    else if (cnt2 == 0 && el1 != arr[i])
    {
      cnt2 = 1;
      el2 = arr[i];
    }
    else if (arr[i] == el1)
      cnt1++;
    else if (arr[i] == el2)
      cnt2++;
    else
    {
      cnt1--;
      cnt2--;
    }
  }
  vector<int> ls3;
  cnt1 = 0, cnt2 = 0;
  int mini = int(N / 3) + 1;
  for (int i = 0; i < N; i++)
  {
    if (arr[i] == el1)
    {
      cnt1++;
    }
    if (arr[i] == el2)
    {
      cnt2++;
    }
  }
  if (cnt1 >= mini)
    ls3.push_back(el1);
  if (cnt2 >= mini)
    ls3.push_back(el2);
  for (int i = 0; i < ls3.size(); i++)
  {
    cout << ls3[i] << " ";
  }
  return 0;
}