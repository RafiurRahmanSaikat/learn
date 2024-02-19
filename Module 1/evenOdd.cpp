#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;
  switch (n % 2)
  {
  case 1:
    cout << "Odd" << endl;
    break;
  case 0:
    cout << "EVEN" << endl;
    break;
  }
}