#include <bits/stdc++.h>
using namespace std;
int main()
{
  list<int> myList = {1, 2, 3, 4, 5};
  list<int> newList;
  // newList = myList;
  newList.assign(myList.begin(), myList.end());
  for (int val : newList)
  {
    cout << val << endl;
  }

  return 0;
}
