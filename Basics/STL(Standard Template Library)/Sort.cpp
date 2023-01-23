#include <bits/stdc++.h>
using namespace std;

void SortArray(int arr[])
{
  sort(arr, arr + 7);
  for (int i = 0; i < 7; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void SortVector(vector<int> v)
{
  sort(v.begin(), v.end());
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;
}

void SortDescArray(int arr[])
{
  sort(arr, arr + 7, greater<int>());
  for (int i = 0; i < 7; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void SortDescVector(vector<int> v)
{
  sort(v.begin(), v.end(), greater<int>());
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;
}
void PrintVectorPair(vector<pair<int, int>> vp)
{
  for (auto i : vp)
  {
    cout << i.first << "   " << i.second << endl;
  }
  cout << endl;
}

void SortVectorPair(vector<pair<int, int>> vp)
{
  sort(vp.begin(), vp.end());
  PrintVectorPair(vp);
}

bool sortbysec(pair<int, int> a, pair<int, int> b)
{
  return (a.second < b.second);
}
void Sort_SecElem_VectorPair(vector<pair<int, int>> vp1)
{
  sort(vp1.begin(), vp1.end(), sortbysec);
  PrintVectorPair(vp1);
}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
  if (p2.second > p1.first)
  {
    return true;
  }
  if (p2.second < p1.first)
  {
    return false;
  }
  // if second element is same then sort acc. to fisrt element but in descending order
  if (p2.first > p1.first)
  {
    return false;
  }
  return true;
}

int main()
{
  int arr[] = {9, 3, 4, 6, 1, 10, 4};
  vector<int> v = {11, 2, 5, 9, 80, 0, 1};

  vector<pair<int, int>> vp;
  vp.push_back({11, 32});
  vp.push_back({10, 22});
  vp.push_back({2, 12});
  vp.push_back({1, 92});
  vp.push_back({1, 32});

  cout << "Array: ";
  SortArray(arr);
  cout << "Vector: ";
  SortVector(v);
  cout << "Sort in Descending order: " << endl;
  cout << "Array: ";
  SortDescArray(arr);
  cout << "Vector: ";
  SortDescVector(v);
  // Default sort by first element in pair
  PrintVectorPair(vp);
  SortVectorPair(vp);
  Sort_SecElem_VectorPair(vp);

  // sort pair acc. to second element, if second element of more than one pair is same, then sort it acc.
  // to first element but in descending order.
  // Array pair
  pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
  sort(a, a + 3, comp);
  cout << "Custom Sort" << endl;
  for (int i = 0; i < 3; i++)
  {
    cout << a[i].first << "  " << a[i].second << endl;
  }
  cout << endl;
  return 0;
}