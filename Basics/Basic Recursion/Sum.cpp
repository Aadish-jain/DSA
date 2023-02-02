#include <bits/stdc++.h>
using namespace std;
int sum = 0;
int Sum(int n)
{
  if (n <= 0)
  {
    return 0;
  }
  sum = sum + n;
  n--;
  Sum(n);
  return sum;
}

long long sum1 = 0;
long long Sumcube(long long n)
{
  if (n <= 0)
  {
    return 0;
  }
  sum1 = sum1 + (long long)pow(n, 3);
  n--;
  Sumcube(n);
  return sum1;
}

int SumParameterized(int n, int sum)
{
  if(n < 1){
    return sum;
  }
  SumParameterized(n - 1 , sum + n);
}

int Sumfunctional(int n){
  if (n == 0){
    return 0;
  }
  return n + Sumfunctional(n - 1);
}

int main()
{
  int n;
  long long n1;
  cin >> n;
  n1 = n;
  cout << "Sum of n numbers: " << Sum(n) << endl;
  cout << "Sum of n^3 numbers: " << Sumcube(n1);
  cout << endl;
  // Sum of first N numbers:
  cout << "Sum using parameterised: " << SumParameterized(n,0);
  cout << endl;  
  cout << "Sum using functional: " << Sumfunctional(n); 
  return 0;
}