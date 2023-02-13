#include<bits/stdc++.h>
using namespace std;

int main()
{
  int a[] = {1, 2, 3, 4, 5, 6, 9, 11};
  int n = sizeof(a) / sizeof(a[0]);
  // cout << sizeof(a) << endl;
  // cout << n;
  int ind = lower_bound(a, a + n, 2) - a; 
  int ind2 = upper_bound(a, a + n, 10) - a; 
  cout << ind  << "->" << a[ind] << endl;
  cout << ind2 << "->" << a[ind2] << endl;
  sort(a, a + n, greater <int>());
  for(int i =0 ; i < n; i++)
  {
  cout << a[i] << " ";
  }
  return 0;

}