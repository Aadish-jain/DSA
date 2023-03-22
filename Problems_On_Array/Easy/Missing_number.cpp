#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n - 1];
  for (int i = 0; i < n - 1; i++)
  {
    cin >> arr[i];
  }
  // Brute force approach
  for (int i = 1; i <= n; i++)
  {
    int flag = 0;
    for (int j = 0; j < n - 1; j++)
    {
      if (arr[j] == i)
      {
        flag = 1;
        break;
      }
    }
    if (flag == 0)
    {
      cout << "Missing number is-> " << i;
    }
  }
  cout << endl;

  // Better solution-> using hashing
  int hash[n + 1] = {0};
  for (int i = 0; i < n - 1; i++)
  {
    hash[arr[i]] = 1;
  }
  for (int i = 1; i < n; i++)
  {
    if (hash[i] == 0)
    {
      cout << "Missing number is: " << i;
    }
  }

  cout << endl;
  // Optimal Solution-> using Sum
  int Sum1 = n * (n + 1) / 2;
  int Sum2 = 0;
  for (int i = 0; i < n - 1; i++)
  {
    Sum2 = Sum2 + arr[i];
  }
  cout << "Missing number is= " << Sum1 - Sum2;

  cout << endl;

  // Best Optimal Solution-> using XOR operator
  int xor1 = 0;
  int xor2 = 0;
  for (int i = 0; i < n - 1; i++)
  {
    xor2 = xor2 ^ arr[i];
    xor1 = xor1 ^ (i + 1); // 1^2^3^4^5
  }
  xor1 = xor1 ^ n;
  cout << "Missing number is== " << (xor1 ^ xor2);

  return 0;
}