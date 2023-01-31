#include <bits/stdc++.h>
using namespace std;

//using vector
int printDivisors(int n)
{
  vector<int> v;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      v.push_back(i);
      if (i != n / i)
      {
        v.push_back(n / i);
      }
    }
  }
  sort(v.begin(), v.end());
  for (auto it : v)
  {
    cout << it << " ";
  }
}


int main()
{
  int n;
  cin >> n;

  // Brute force -> Time complexity = O(N);
  for (int i = 1; i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << endl;
    }
  }
  cout << endl;

  // Efficient solution:
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << endl;
      if (i != n / i)
      {
        cout << n / i << endl;
      }
    }
  }

// using vector
  printDivisors(n);
  return 0;
}