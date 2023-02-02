#include <bits/stdc++.h>
using namespace std;

int factorialpar(int n, int fact)
{
  if (n < 1)
  {
    return fact;
  }
  factorialpar(n - 1, fact * n);
}

int factorialfun(int n)
{
  if (n == 0)
  {
    return 1;
  }
  return n * factorialfun(n - 1);
}

void factorialNumbers(long long N)
{
  long long a = 1, j = 1;
  vector<long long> v;
  while (a <= N)
  {
    v.push_back(a);
    j++;
    a = a * j;
  }
    for(auto it : v){
    cout << it << " ";
  }
}

int main()
{
  int n;
  cin >> n;
  cout << "Factorial using parameterised: " << factorialpar(n, 1);
  cout << endl;
  cout << "Factorial using functional: " << factorialfun(n);
  cout << endl;

/*
A number N is called a factorial number if it is the factorial of a positive integer.
For example, the first few factorial numbers are 1, 2, 6, 24, 120,
Given a number N, the task is to return the 
list/vector of the factorial numbers smaller than or equal to N.

Example 1:
Input: N = 3
Output: 1 2
Explanation: The first factorial number is 
1 which is less than equal to N. The second 
number is 2 which is less than equal to N,
but the third factorial number is 6 which 
is greater than N. So we print only 1 and 2.

Example 2:
Input: N = 6
Output: 1 2 6
Explanation: The first three factorial 
numbers are less than equal to N but 
the fourth factorial number 24 is 
greater than N. So we print only first 
three factorial numbers.
*/

  factorialNumbers(n);

  return 0;
}