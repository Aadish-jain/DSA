#include<bits/stdc++.h>

using namespace std;
int printlist(list <int> l){
  list <int> :: iterator it;
  for(it = l.begin(); it != l.end(); it++){
    cout << *(it) << " ";
  }
  cout << endl;
}

int main(){
  list <int> li;
  li.push_back(10);
  li.push_back(20);
  li.push_back(30);
  li.push_back(40);
  li.emplace_back(88);
  li.emplace_front(99);
  li.emplace_front();  // 0
  li.push_front(77);
  printlist(li); 
  return 0;
}