#include<bits/stdc++.h>

using namespace std;

int main(){

/*
Question 1: Write a prg to genrate the reverse of a given number N.
Print the corresponding reverse number.
Note: If a number has trailing zeros, then its reverse will not include them.
For Example: 10400 will be 401 instead of 00401.
*/
	int n, rev = 0;
  cin >> n;
	while(n > 0){
		int lastdigit = n % 10;
		n = n / 10;
		rev = rev * 10 + lastdigit;
	}
	cout << rev << endl;


/*
Question 2: Given a 32 bit number X, reverse its binary form and print the answer in decimal.
Input: 1
Output : 2147483648
Explanation:
Binary of 1 in 32 bits representation-
00000000000000000000000000000001
Reversing the binary form we get, 
10000000000000000000000000000000,
whose decimal value is 2147483648. 
*/
int X;
cin >> X;
  long long arr[32] = {0};
  long long num = X;
  for(int i =0; num >0; i++){
    arr[i] = num % 2;
    num = num / 2;
  }
  for(int i = 0; i <32; i++){
    num = num + arr[i] * pow(2,31-i);
  }
  cout << "Reverse of " << X << " after binary conversion is: ";
  cout << num << endl;



/*
Question 3: Given a signed 32-bit integer x, return x with its digits reversed. 
If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1],
then return 0.
Assume the environment does not allow you to store 64-bit integers (signed or unsigned).
*/

  int x;
  cin >> x;
  long long rev1 = 0;
  long long num1 = x, isNeg = 0;
  long long lastdigit;
  if (num1 < 0)
  {
    isNeg = 1;
  }
  x = abs(x);
  for (long long i = 0; x > 0; i++)
  {
    lastdigit = x % 10;
    rev1 = rev1 * 10 + lastdigit;
    x = x / 10;
  }
  if (isNeg == 1)
  {
    rev1 = (rev1 * -1);
  }
  if (rev1 > (-1 * (pow(2, 31))) && rev1 < ((pow(2, 31) - 1)))
  {
    cout << rev1;
  }
  else
  {
    cout << 0;
  }

  return 0;
}