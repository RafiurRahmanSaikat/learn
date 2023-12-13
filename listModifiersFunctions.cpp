#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> myList = {1, 2, 3, 4, 5};
  // list<int> newList;
  // newList = myList;
  // newList.assign(myList.begin(), myList.end());
  // myList.push_back(111);
  // myList.push_front(22);
  // myList.pop_back();
  // myList.pop_front();
  myList.insert(next(myList.begin(), 2), 1515);

  for (int val : myList)
  {
    cout << val << endl;
  }

  return 0;
}
