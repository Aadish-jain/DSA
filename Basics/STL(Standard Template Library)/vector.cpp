#include <bits/stdc++.h>

using namespace std;

void ExplainVector()
{

  // Declaration
  vector<int> v;
  v.push_back(10);
  cout << v.size() << endl;
  cout << v[0] << endl; // access element of vector
  v.push_back(20);
  cout << v.size() << endl;
  v.emplace_back(30);
  cout << v.at(1) << endl; // access element of vector
  cout << v.size() << endl;
  cout << v.at(2) << endl;

  vector<pair<int, int>> vec1;
  vec1.push_back({11, 44});
  vec1.emplace_back(22, 33); // fast and not need any {} for pairs.
  cout << vec1.size() << endl;
  cout << vec1[0].first << endl;
  cout << vec1[0].second << endl;
  cout << vec1[1].first << endl;
  cout << vec1[1].second << endl;
}

void Accessthroughitr()
{
  // vector <int> v(5, 100);       // 5 elements all have value 100.
  vector<int> v;
  v.emplace_back(10);
  v.emplace_back(20);
  v.emplace_back(30);
  v.emplace_back(40);
  vector<int>::iterator itr = v.begin();
  cout << *(itr) << " ";
  itr += 2;
  cout << *(itr) << " ";
  //   itr++;
  //   cout << *(itr) << " ";
  //   itr++;
  //   cout << *(itr) << " ";
  //   itr++;
  //   cout << *(itr) << " ";   // throwing garbage value
  //   itr++;
  //   cout << *(itr) << " ";   // throwing garbage value
  cout << endl
       << v.back() << endl;
  vector<int>::iterator itr1 = v.end();
  itr--;
  cout << *(itr1) << " ";
  cout << endl;
}

void printvalueitr1()
{
  vector<int> v;
  v.emplace_back(11);
  v.emplace_back(12);
  v.emplace_back(13);
  v.emplace_back(14);
  v.emplace_back(15);
  v.emplace_back(16);
  for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    cout << *(it) << " ";
  }
  cout << endl;
}

void printvalueitr2()
{
  vector<int> v;
  v.emplace_back(21);
  v.emplace_back(22);
  v.emplace_back(23);
  v.emplace_back(24);
  v.emplace_back(25);
  v.emplace_back(26);
  for (auto it = v.begin(); it != v.end(); it++)
  {
    cout << *(it) << " ";
  }
  cout << endl;
}

void printvalueitr3()
{
  vector<int> v;
  v.emplace_back(31);
  v.emplace_back(32);
  v.emplace_back(33);
  v.emplace_back(34);
  v.emplace_back(35);
  v.emplace_back(36);
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;
}
void DeleteElm()
{
  vector<int> v;
  v.emplace_back(31);
  v.emplace_back(32);
  v.emplace_back(33);
  v.emplace_back(34);
  v.emplace_back(35);
  v.emplace_back(36);
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;
  v.erase(v.begin() + 1);
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;

  v.emplace_back(99);
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;

  v.erase(v.begin() + 1, v.begin() + 4); // v.erase[start,end) end value is not included

  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;
  v.pop_back(); // delete the last element

  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;
}

void InsertFunction()
{
  vector<int> v(2, 100);
  v.insert(v.begin(), 300);
  v.insert(v.begin() + 1, 2, 88); // insert element anywhere in vector
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;

  // insert vector into another vector
  vector<int> copy(2, 29);
  v.insert(v.begin(), copy.begin(), copy.end());
  v.insert(v.end(), copy.begin(), copy.end());
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;
}

void SwapVectors()
{

  vector<int> v;
  v.emplace_back(31);
  v.emplace_back(32);
  v.emplace_back(33);
  v.emplace_back(34);
  v.emplace_back(35);
  v.emplace_back(36);
  cout << "vector1: ";
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;

  vector<int> v2;
  v2.emplace_back(301);
  v2.emplace_back(302);
  v2.emplace_back(303);
  v2.emplace_back(340);
  v2.emplace_back(357);
  v2.emplace_back(364);
  cout << "vector2: ";
  for (auto it : v2)
  {
    cout << it << " ";
  }
  cout << endl;
  // after swapping
  v.swap(v2);
  cout << "After swapping:" << endl;
  cout << "Vector1: ";
  for (auto it : v)
  {
    cout << it << " ";
  }
  cout << endl;
  cout << "Vector2: ";
  for (auto it : v2)
  {
    cout << it << " ";
  }
  cout << endl;

  v.clear();                 // clear the entire vector
  cout << v.empty() << endl; // if vector is empty -> 1/ true or  not empty -> 0/false
  cout << v2.empty();        // if vector is empty -> 1/ true or  not empty -> 0/false
}

int main()
{
  // ExplainVector();
  Accessthroughitr();
  printvalueitr1();
  printvalueitr2();
  printvalueitr3();
  DeleteElm();
  InsertFunction();
  SwapVectors();
  return 0;
}