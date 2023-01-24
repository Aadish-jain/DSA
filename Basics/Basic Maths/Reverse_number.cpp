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
  cout << num;
  return 0;
}