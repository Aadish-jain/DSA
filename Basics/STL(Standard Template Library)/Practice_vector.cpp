#include<bits/stdc++.h>

using namespace std;

int main()
{
  // int input, n;
  // cin>> input;

// Declare vector
  vector<int> v;

// // insert value to the vector
//   for(int i = 1; i<= input; i++){
//   cin>> n;
//   //push_back() -> insert element
//   v.push_back(n);
//   }

// // print vector
// for( auto it : v ) {
//   cout<< it<<" ";
// }
// cout << endl;
// // begin()
// auto it = v.begin();
// cout <<"Begin element is: " << *(it) << endl;

// // end()  -> last element after the  vector's last original element
// auto it1 = v.end() - 1;
// cout <<"End element is: " << *(it1) << endl;

// //insert() -> inserting element at specific position
// auto it2 = v.begin() + 2;
// v.insert(it2,96);

// // print vector
// for( auto it : v ) {
//   cout<< it<<" ";
// }
// cout <<endl;
// //erase() -> delete a specific element
// auto it3 = v.end() - 2;
// v.erase(it3);

// // print vector
// for( auto it : v ) {
//   cout<< it<<" ";
// }
// cout <<endl;

// //pop_back() -> deletes the last element and returns it to the calling function
// v.pop_back();
// // print vector
// for( auto it : v ) {
//   cout<< it<<" ";
// }
// cout << endl;

// //front() -> return a reference to the first element
// int a = v.front();
// cout << a;
// cout << endl;
// //back() -> return a reference to the last element
// int b = v.back();
// cout << b;
// cout <<endl;
// //clear() -> delete all the element of vector
// v.clear();

// //empty() -> to check if the vector is empty
// int c = v.empty();
// cout << c;     // 1 means vector is empty.and 0 means not empty
// cout << endl;

// //size() -> return the size of vector
// int d = v.size();
// cout <<"Size of vector is: " << d<< endl;

v.push_back(10);
v.push_back(20);
v.push_back(30);
v.push_back(40);
// print vector
for( auto it : v ) {
  cout<< it<<" ";
}
cout <<endl;
// cbegin() -> refers to the first element of the vector
auto it = v.cbegin();
cout <<"Begin element is: " << *(it) << endl;
// cend() -> refers to the element after last element of the vector
auto it1 = v.cend() - 1;
cout <<"End element is: " << *(it1) << endl;
// rbegin() -> it points to the last element of the vector
auto it2 = v.rbegin();
cout << *(it2) << endl;
//rend() -> it points to the theoretical element before the first element of the vector
auto it3 = v.rend();
cout << *(it3) << endl;
//crbegin() -> it refers to the last element of the vector
auto it4 = v.crbegin();
cout << *(it4) << endl;
//crend() -> it refers to the theoretical element before the first element of the vector
auto it5 = v.crend();
cout << *(it5) << endl;
//max_size() -> returns the maximum size the vector can hold
int max = v.max_size();
cout << "Maximum size of vector: " << max << endl;
//capacity() -> it returns the current capacity of the vector
int cap = v.capacity();
cout << "Current capacity of vector: " << cap << endl;

// print vector
for( auto it : v ) {
  cout<< it<<" ";
}
cout << endl;
int index = lower_bound(v.begin(), v.end(), 10) - v.begin();
cout << "lower bound index of 10 is : " << index << endl;
int index2 = upper_bound(v.begin(), v.end(), 10) - v.begin();
cout << "Upper bound index of 10 is : " << index2 << endl;
int index3 = lower_bound(v.begin(), v.end(), 40) - v.begin();
cout << "lower bound index of 40 is : " << index3 << endl;
int index4 = upper_bound(v.begin(), v.end(), 40) - v.begin();
cout << "Upper bound index of 40 is : " << index4 << endl;

return 0;
}