#include <bits/stdc++.h>
using namespace std;

vector<int> Intersection(int a[], int b[], int n1, int n2)
{
  int i = 0, j = 0;
  vector<int> IntersectArray;
  while (i < n1 && j < n2)
  {
    if (a[i] < b[j])
    {
      i++;
    }
    else if (b[j] < a[i])
    {
      j++;
    }
    else
    {
      IntersectArray.push_back(a[i]);
      i++;
      j++;
    }
  }
  return IntersectArray;
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
  vector<int> arr = Intersection(a, b, n1, n2);
  PrintArray(arr);
  return 0;
}