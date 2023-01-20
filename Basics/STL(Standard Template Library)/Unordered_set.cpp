#include<bits/stdc++.h>

using namespace std;

void Printust(unordered_set <int> ust)
{

  for (auto it = ust.begin(); it != ust.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;
}


int main(){

  unordered_set <int> ust;
  ust.insert(2);  // {2}
  ust.insert(2);  // {2}
  ust.insert(1);  // {1, 2}
  ust.insert(1);  // {1, 2}
  ust.insert(1);  // {1, 2}
  ust.insert(3);  // {1, 2, 3}
  ust.insert(3);  // {1, 2, 3}
  Printust(ust);
  
  ust.erase(ust.find(1));    // erase only 1
  cout<< "after erase 1: ";
  Printust(ust);

  ust.insert(0);
  ust.insert(4);
  ust.insert(6);
  ust.insert(9);
  
Printust(ust);

  int cnt = ust.count(10);        // 0 or 1 output true or false
  cout << cnt << endl;
}