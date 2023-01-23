#include <bits/stdc++.h>
using namespace std;

int main()
{

  // FOR STRINGS
  string s = "321";
  sort(s.begin(), s.end()); // sorting is used here for printing all the permutation
  cout << "All permutation of s is: " << endl;
  do
  {
    cout << s << endl;
  } while (next_permutation(s.begin(), s.end()));

  string s1 = "312";
  // sort(s.begin(),s.end());      // without sorting it is showing the next permutation only
  cout << "All permutation of s1 is: " << endl;
  do
  {
    cout << s1 << endl;
  } while (next_permutation(s1.begin(), s1.end()));

cout << endl;
cout << "FOR ARRAY"<< endl;
  // FOR ARRAY
  int arr[] = {1, 2, 3};
  int arr_len = sizeof(arr) / sizeof(arr[0]);
  do
  {
    cout << arr[0] << " ";
    cout << arr[1] << " ";
    cout << arr[2] << " " << endl;
  } while (next_permutation(arr, arr + arr_len));

cout << endl;
cout << "FOR VECTOR" <<endl;
  // FOR VECTOR
  vector <int> v = {3,1,2};
  do{
    cout << v[0] << " " << v[1] << " " << v[2] << endl;
  }while(next_permutation( v.begin(), v.end() ) );
  return 0;
}