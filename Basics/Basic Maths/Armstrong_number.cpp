#include<bits/stdc++.h>
using namespace std;

int main()
{
  int digit, cnt = 0, sum = 0, n, num1, num2;
  cin >> n;
  num1 = n;
  num2 = n;
  for(int i = 0; num1 > 0; i++){
    digit = num1 % 10;
    cnt += 1;
    num1 = num1 / 10;
   } 
  for(int i = 0; num2 > 0; i++){
    digit = num2 % 10;
    sum = sum + pow(digit, cnt);
    num2 = num2 / 10;
  }
  cout << sum << endl;
  return 0;
}