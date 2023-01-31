#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
  while (a > 0 && b > 0)
  {
    if (a > b)
    {
      a = a % b;
    }
    else
    {
      b = b % a;
    }
  }
  if (a == 0)
  {
    return b;
  }
  else
  {
    return a;
  }
}

int main()
{
  int a, b;
  cin >> a;
  cin >> b;
  int lcm = (a * b) / gcd(a, b);
  cout << "LCM is: " << lcm << endl;
  cout << "GCD is: " << gcd(a, b) << endl;
  return 0;

  // Both LCM and HCF/GCD:

    long long gcd = 0;
    vector<long long> ans;
    long long  A = a;
    long long B = b;
    while (A > 0 && B > 0)
    {
      if (A > B)
      {
        A = A % B;
      }
      else
      {
        B = B % A;
      }
    }
    if (A == 0)
    {
      gcd = B;
    }
    else
    {
      gcd = A;
    }

    long long lcm1 = (A * B) / gcd;
    ans.push_back(lcm1);
    ans.push_back(gcd);
    cout << ans[0] << "  "<< ans [1]<< endl;
  }