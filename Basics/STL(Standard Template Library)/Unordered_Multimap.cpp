#include <bits/stdc++.h>
using namespace std;

void PrintMultiMap(unordered_multimap<int, int> ummp)
{
  for (auto it = ummp.begin(); it != ummp.end(); it++)
  {
    cout << it->first << "   " << it->second << endl;
  }
  cout << endl;
}

int main()
{
  unordered_multimap<int, int> ummp;
  ummp.insert({1, 10});
  ummp.insert({1, 9});
  ummp.insert({2, 1});
  ummp.insert({3, 1});
  ummp.insert({3, 1});
  ummp.insert({4, 8});
  ummp.insert({4, 2});
  ummp.insert({4, 1});
  PrintMultiMap(ummp);
  cout << "Size: " << ummp.size() << endl;
  ummp.erase(ummp.find(1));
  PrintMultiMap(ummp);
  cout << "Size: " << ummp.size() << endl;
  return 0;
}