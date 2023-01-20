#include <bits/stdc++.h>
using namespace std;

void PrintMultiSet(multiset<int> ms)
{

  for (auto it = ms.begin(); it != ms.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}

void MultiSet()
{
  // duplicate values allowed and sorted
  multiset<int> ms;
  ms.insert(2);  // {2}
  ms.insert(2);  // {2, 2}
  ms.insert(1);  // {1, 2, 2}
  ms.insert(1);  // {1, 1, 2, 2}
  ms.insert(1);  // {1, 1, 1, 2, 2}
  ms.insert(3);  // {1, 1, 1, 2, 2, 3}
  ms.insert(3);  // {1, 1, 1, 2, 2, 3, 3}
  PrintMultiSet(ms);
  
  ms.erase(ms.find(1));    // erase only 1
  PrintMultiSet(ms);

  ms.erase(1);            // erase all 1
  PrintMultiSet(ms);
  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  ms.insert(1);
  
  PrintMultiSet(ms);
  // erase range
  ms.erase(ms.find(1), ms.find(1 + 1));
  PrintMultiSet(ms);

  int cnt = ms.count(3);
  cout << cnt << endl;
}

int main()
{
  MultiSet();
}