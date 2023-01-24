
#include <bits/stdc++.h>
using namespace std;

void CountDigit1(int n)
{
  int lastdigit;
  int count = 0;
  while (n > 0)
  {
    lastdigit = n % 10;
    n = n / 10;
    count++;
    cout << lastdigit << endl;
  }
  cout << "Total number of digits are: " << count << endl;
  // OR
  int cnt = (int)(log10(n) + 1);
  cout << "Total number of digits are: " << count << endl;
}

void CountDigit2(int N)
{
  int lastdigit, Num = N, count = 0;
  while (Num > 0)
  {
    lastdigit = Num % 10;
    if (lastdigit > 0 && N % lastdigit == 0)
    {
      count += 1;
    }
    Num = Num / 10;
  }
  cout << count << endl;
}

int main()
{
  int input;
  cout << "Enter Number: ";
  cin >> input;

  /*
  Question1: Given a number 'n',find out and return the number of digits present in a number
  Example 1:
  Input: n  = 7789;
  Output: 4
  */
  CountDigit1(input);

  /*


  Question2: Given a number N. Count the number of digits in N which evenly divides N.
  Note :- Evenly divides means whether N is divisible by a digit i.e. leaves a remainder 0 when divided.

  Example 1:
  Input: N = 12
  Output: 2
  Explanation: 1, 2 both divide 12 evenly

  Example 2:
  Input: N = 23
  Output: 0
  Explanation: 2 and 3, none of them divide 23 evenly
  */

  // CountDigit2(input);

  return 0;
}