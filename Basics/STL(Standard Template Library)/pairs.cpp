#include <bits/stdc++.h>

using namespace std;

void Pair1()
{
  // int pair
  pair<int, int> p = {1, 3};
  cout << p.first << " " << p.second << endl;
  // char Pair
  pair<char, char> ch = {'A', 'b'};
  cout << ch.first << " " << ch.second << endl;
  // string pair
  pair<string, string> pstr = {"Aadish", "Jain"};
  cout << pstr.first << " " << pstr.second << endl;
}

void Pair2()
{
  // Nested int pair
  pair<int, pair<int, int>> p = {1, {3, 2}};
  cout << p.first << " " << p.second.first << " " << p.second.second << endl;
  // Nested char pair
  pair<char, pair<char, char>> ch = {'A', {'C', 'D'}};
  cout << ch.first << " " << ch.second.first << " " << ch.second.second << endl;
  // Nested string pair
  pair<string, pair<string, string>> pstr = {"Aadish", {"Jain", "AJ"}};
  cout << pstr.first << " " << pstr.second.first << " " << pstr.second.second << endl;
  // Nested int char pair
  pair<int, pair<int, char>> pic = {1, {3, 'A'}};
  cout << pic.first << " " << pic.second.first << " " << pic.second.second << endl;
  // Nested int char string pair
  pair<int, pair<char, string>> pics = {1, {'A', "Aadish Jain"}};
  cout << pics.first << " " << pics.second.first << " " << pics.second.second << endl;
}

void Pair3(){
  //Pair with int array
  pair < int, int > arr[] = { {1, 2}, {2, 5}, {4, 6} };
  cout << arr[1].second << " " << arr[0].first << " " << arr[2].first << endl;
  //Pair with char array
  pair < char, char > arr2[] = { {'A', 'B'}, {'C', 'D'}, {'E', 'F'} };
  cout << arr2[1].second << " " << arr2[0].first << " " << arr2[2].first << endl;
  //Pair with string array
  pair < string, string > arr3[] = { {"Aj", "BD"}, {"CD", "DE"}, {"Ef", "DF"} };
  cout << arr3[1].second << " " << arr3[0].first << " " << arr3[2].first << endl;
  //Pair with int char array
  pair < int, char > arr1[] = { {1, 'A'}, {2, 'B'}, {4, 'C'} };
  cout << arr1[1].second << " " << arr1[0].second << " " << arr1[2].first << endl;
  //Pair with char string array
  pair < char, string > arr4[] = { {'A', "Aadish"}, {'B', "Jain"}, {'C', "AJ"} };
  cout << arr4[1].second << " " << arr4[0].second << " " << arr4[2].first << endl;
}


int main()
{
  // Pairs
  Pair1();
  Pair2();
  Pair3();
  auto a = 12;  //automatically assume the data type based on the value
  cout << a << endl;
  auto b = "Aadish Jain";
  cout << b << endl;
  auto c = 'a';
  cout << c << endl;
  return 0;
}