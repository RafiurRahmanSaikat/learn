#include <bits/stdc++.h>
using namespace std;
const int N = 1005;
int dp[N][N];

bool subSetSum(int n, int a[], int sum)
{
  if (n == 0)
  {
    if (sum == 0)
      return true;
    else
      return false;
  }
  if (dp[n][sum] != -1)
    return dp[n][sum];
  if (a[n - 1] <= sum)
  {
    bool op1 = subSetSum(n - 1, a, sum - a[n - 1]);
    bool op2 = subSetSum(n - 1, a, sum);
    return op1 or op2;
  }
  else
    return subSetSum(n - 1, a, sum);
}
int main()
{
  memset(dp, -1, sizeof(dp));
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  int sum;
  cin >> sum;
  subSetSum(n, a, sum) ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}
