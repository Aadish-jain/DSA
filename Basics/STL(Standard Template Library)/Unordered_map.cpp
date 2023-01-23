#include <bits/stdc++.h>
using namespace std;

void Printump(unordered_map<int, int> ump)
{
  for (auto it = ump.begin(); it != ump.end(); it++)
  {
    cout << it->first << "  " << it->second << endl;
  }
  cout << endl;
}

int main()
{
  unordered_map<int, int> ump;
  ump.insert({1, 2});
  ump.insert({1, 3});
  ump.insert({2, 13});
  ump.insert({2, 3});
  ump.insert({3, 35});
  Printump(ump);
  cout << "Size of Unordered Map is: " << ump.size() << endl;
  ump.erase(ump.find(1));
  Printump(ump);
  cout << "Size of Unordered Map is: " << ump.size() << endl;

  ump.clear();
  Printump(ump);
  cout << "Size of Unordered Map is: " << ump.size() << endl;

  if (ump.empty() == 1)
  {
    cout << "Unordered Map is empty" << endl;
  }
  return 0;
}