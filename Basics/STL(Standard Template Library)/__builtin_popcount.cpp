#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n = 7;
  //__builtin_popcount();
  cout << __builtin_popcount(n) << endl;

  //__builtin_popcountll();
  long long n2 = 7777777777777;
  cout << __builtin_popcountll(n2) << endl;
  return 0;
}