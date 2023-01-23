#include <bits/stdc++.h>
using namespace std;

int main()
{
  vector<int> v = {9, 2, 88, 23, 3, 4, 4};
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;

  // min_element();
  cout << "Minimum element : " << *min_element(v.begin(), v.end()) << endl;
  // max_element();

  cout << "Maximum element : " << *max_element(v.begin(), v.end()) << endl;;
}