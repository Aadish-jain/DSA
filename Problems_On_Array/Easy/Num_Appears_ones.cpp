#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  // Find the number appears onces and the other numbers twice.
  int Xor = 0;
  for (int i = 0; i < n; i++)
  {
    Xor = Xor ^ arr[i];
  }
  cout << "Number appear once is:" << Xor;
  return 0;
}