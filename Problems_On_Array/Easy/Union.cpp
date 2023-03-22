#include <bits/stdc++.h>
using namespace std;

vector<int> Union(int a[], int b[], int n1, int n2)
{
  vector<int> UnionArray;
  int i = 0;
  int j = 0;
  while (i < n1 && j < n2)
  {
    if (a[i] <= b[j])
    {
      if (UnionArray.size() == 0 || UnionArray.back() != a[i])
      {
        UnionArray.push_back(a[i]);
      }
      i++;
    }
    else
    {
      if (UnionArray.size() == 0 || UnionArray.back() != b[j])
      {
        UnionArray.push_back(b[j]);
      }
      j++;
    }
  }
  while (i < n1)
  {
    if (UnionArray.size() == 0 || UnionArray.back() != a[i])
    {
      UnionArray.push_back(a[i]);
    }
    i++;
  }

  while (j < n2)
  {
    if (UnionArray.size() == 0 || UnionArray.back() != b[j])
    {
      UnionArray.push_back(b[j]);
    }
    j++;
  }
  return UnionArray;
}

void PrintArray(vector<int> arr)
{
  for (auto it : arr)
  {
    cout << it << " ";
  }
}

int main()
{
  int n1, n2;
  cin >> n1 >> n2;
  int a[n1], b[n2];
  for (int i = 0; i < n1; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n2; i++)
  {
    cin >> b[i];
  }
  // Union
  vector<int> arr = Union(a, b, n1, n2);
  PrintArray(arr);
  return 0;
}