#include <bits/stdc++.h>
using namespace std;
int main()
{
  // list<int> myList;
  // cout << myList.size() << endl;
  // cout << myList.front() << endl;
  // list<int> myList(10, 5);
  // list<int> myList2 = {10, 20, 30, 40, 50, 60, 70};
  // list<int> myList(myList2);
  vector<int> v = {10, 20, 30, 40, 50};
  list<int> myList(v.begin(), v.end());
  for (int val : myList)
  {
    cout << val << endl;
  }
  // for (auto i = myList.begin(); i != myList.end(); i++)
  // {
  //   cout << *i << endl;
  // }
  return 0;
}
