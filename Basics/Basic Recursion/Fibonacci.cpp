#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n)
{
  if (n <= 1)
  {
    return n;
  }
  int last = fibonacci(n - 1);
  int s_last = fibonacci(n - 2);
  return last + s_last;
}

vector<long long> printFibb(int n)
{
  if (n == 1)
  {
    vector<long long> v;
    v.push_back(1);
    return v;
  }
  if (n == 2)
  {
    vector<long long> v;
    v.push_back(1);
    v.push_back(1);
    return v;
  }
  vector<long long> v = printFibb(n - 1);
  v.push_back(v[n - 3] + v[n - 2]);
  return v;
}

int main()
{
  int n;
  cin >> n;
  cout << fibonacci(n);
  cout << endl;
  for (auto it : printFibb(n))
  {
    cout << it << " ";
  }
  return 0;
}