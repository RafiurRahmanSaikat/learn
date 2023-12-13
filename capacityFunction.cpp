#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> myList = {10, 20, 30};
  // cout << myList.size() << endl;
  // cout << myList.empty() << endl;
  // cout << myList.max_size() << endl;
  // myList.clear();
  // cout << myList.empty() << endl;
  cout << myList.size() << endl;
  myList.resize(5, 555);
  for (int val : myList)
  {
    cout << val << endl;
  }

  return 0;
}