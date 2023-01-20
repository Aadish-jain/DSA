#include <bits/stdc++.h>
using namespace std;

void PrintMap(map <int, int> m)
{
  for(auto it = m.begin(); it != m.end(); it++){
    cout << it -> first << "  " << it -> second <<endl;
  }
  // OR
  // for(auto it : m){
  //   cout << it.first << "   " << it.second << endl;
  // }
cout <<endl;

}
void Map()
{
  map<int, int> m;
  m.insert({1,2});
  m.insert({2,4});
  m.insert({3,6});
  m.insert({5,7});
  m[9] = 100;
  PrintMap(m);
  cout << "after Erase begin" << endl;
  m.erase(m.begin());
  PrintMap(m);
  cout << "After erase key 3" << endl;
  m.erase(3);
  PrintMap(m);
  cout << m[9]<<endl;
  cout << m[1] << endl;

}

int main()
{
  Map();
  return 0;
}