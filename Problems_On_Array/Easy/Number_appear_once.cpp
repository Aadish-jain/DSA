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
  int Xor = 0;
  for (int i = 0; i < n; i++)
  {
    Xor = Xor xor arr[i];
  }
  cout << "Number appear once in an array is: " << Xor;
  return 0;
}