#include <bits/stdc++.h>
using namespace std;

// Count number of digits
void CountDigits(int n)
{
  int cnt = 0;
  for (int i = 1; n > 0; i++)
  {
    // int lastdigit = n % 10;
    n = n / 10;
    cnt++;
  }
  cout << "Number of digits are: " << cnt << endl;
}

// Reverse of a Number
void ReverseNum(int n)
{
  int rev = 0, dup = n;
  for (int i = 1; n > 0; i++)
  {
    int lastdigit = n % 10;
    n = n / 10;
    rev = rev * 10 + lastdigit;
  }
  cout << "Original Number is:" << dup << endl;
  cout << "Reverse of Number is:" << rev << endl;
}

// Check Number is palindrome
void Palindrome(int n)
{
  int rev = 0, dup = n;
  for (int i = 1; n > 0; i++)
  {
    int lastdigit = n % 10;
    n = n / 10;
    rev = rev * 10 + lastdigit;
  }
  if (rev == dup)
  {
    cout << "Number is palindrome" << endl;
  }
  else
  {
    cout << "Number is not a palindrome" << endl;
  }
}

// Check number is Armstrong
void Armstrong(int n)
{
  int cnt = 0, dup = n, org_num = n, sum = 0;
  for (int i = 1; n > 0; i++)
  {
    n = n / 10;
    cnt++;
  }
  for (int i = 1; dup > 0; i++)
  {
    int lastdigit = dup % 10;
    dup = dup / 10;
    sum = sum + pow(lastdigit, cnt);
  }
  if (sum == org_num)
  {
    cout << "Number is Armstrong Number" << endl;
  }
  else
  {
    cout << "Number is not an Armstrong Number" << endl;
  }
}

// Print all divisors
void Divisor(int n)
{
  cout << "Divisor of " << n << " is: ";
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      cout << i << " ";
      if (i != n / i)
      {
        cout << n / i << " ";
      }
    }
  }
  cout << endl;
}

// Check the number is prime or not
void Prime(int n)
{
  int cnt = 0;
  for (int i = 1; i * i <= n; i++)
  {
    if (n % i == 0)
    {
      cnt++;
    }
  }
  if (cnt == 1)
  {
    cout << "Number is prime" << endl;
  }
  else
  {
  cout << "Number is not a prime" << endl;  
  }
}

int main()
{
  int n;
  cin >> n;
  CountDigits(n);
  ReverseNum(n);
  Palindrome(n);
  Armstrong(n);
  Divisor(n);
  Prime(n);
  return 0;
}