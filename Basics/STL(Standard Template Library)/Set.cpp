#include <bits/stdc++.h>
using namespace std;

void PrintSet(set<int> s)
{

  for (auto it = s.begin(); it != s.end(); it++)
  {
    cout << *(it) << " ";
  }
  cout << endl;
}

void Set()
{
  set<int> st;
  st.insert(20);  // {20}
  st.insert(8);   // {8, 20}
  st.emplace(30); // {8, 20. 30}
  st.insert(40);  // {8, 20. 30, 40}
  st.insert(50);  // {8, 20, 30, 40, 50}
  st.emplace(30); // {8, 20, 30, 40, 50}
  // st.push(10); // push not work

  // print set
  PrintSet(st);
  // cout << endl;
  // count element -> 0 or 1 as output
  cout << st.count(8) << endl;
  // find element
  auto it = st.find(20);
  cout << *(it) << endl;

  // erase single element
  st.erase(20);
  PrintSet(st);

  // erase range of element
  auto it1 = st.find(8);
  auto it2 = st.find(40);
  st.erase(it1, it2);
  cout << endl;
  PrintSet(st);
cout <<endl;
  st.insert(20);  
  st.insert(8);   
  st.emplace(60); 
  st.insert(90);  
  st.insert(70);  
  st.emplace(100);
  PrintSet(st);

auto itr1 = st.lower_bound(100);
cout << *(itr1) << endl;

auto itr2 = st.upper_bound(20);
cout << *(itr2) << endl;

}

int main()
{
  Set();

  return 0;
}
