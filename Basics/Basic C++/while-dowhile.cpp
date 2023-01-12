#include<bits/stdc++.h>
using namespace std;
int main(){
  /* while loops
  int num;
  cin >> num;
  while(num >= 0){
    cout << "Hey Aadish " << num << endl;
    num -= 1;
  }
  cout << "Value of num is: " << num << endl;
  int i = 1;
  cout << "Enter value of num: ";
  cin >> num;
  while(i <= num){
    cout << "Bye Aadish" << i << endl;
    i += 1;
  }
  cout << "Value of i is: " << i;
*/
/* do-while loop - in this at least one time Hello Aadish will print*/
int i = 0, num;
cin >> num;
do{
  cout << "Hello Aadish " << i <<  endl;
  i += 1;
}
while(i <= num);
  return 0;

} 