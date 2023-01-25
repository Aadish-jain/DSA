#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  // Brute force -> Time complexity = O(N);
  for(int i = 1; i <= n; i++){
    if(n % i == 0){
      cout << i << endl;
    }
  }
cout << endl;

  // Efficient solution:
  for(int i = 1; i*i <= n; i++){
    if(n % i == 0){
      cout << i << endl;
    }
    if(i != n/i){
      cout << n/i << endl;
    }
  }
  return 0;
}