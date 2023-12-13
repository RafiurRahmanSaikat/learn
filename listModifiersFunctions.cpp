#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> myList = {1, 2, 3, 1, 1, 100, 4, 5, 1};
  list<int> myList2 = {10, 20, 30};
  vector<int> v = {100, 200, 300};

  // list<int> newList;
  // newList = myList;
  // newList.assign(myList.begin(), myList.end());
  // myList.push_back(111);
  // myList.push_front(22);
  // myList.pop_back();
  // myList.pop_front();
  // myList.insert(next(myList.begin(), 2), 1515);
  // myList.erase(next(myList.begin(), 2));
  // myList.insert(next(myList.begin(), 2), {11, 22, 33, 44, 55});
  // myList.insert(next(myList.begin(), 2), myList2.begin(), myList2.end());
  // myList.insert(next(myList.begin(), 2), v.begin(), v.end());
  // myList.erase(next(myList.begin(), 2), next(myList.begin(), 5));
  // replace(myList.begin(), myList.end(), 1, 15555);

  // for (int val : myList)
  // {
  //   cout << val << endl;
  // }

  auto it = find(myList.begin(), myList.end(), 10);
  if (it == myList.end())
  {
    cout << "NOT FOUND!" << endl;
  }
  else
  {

    cout << "FOUND" << endl;
  }
  return 0;
}
