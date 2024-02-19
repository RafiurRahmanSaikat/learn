#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll N = 10e6 + 5;
ll dp[N];
ll fibo(ll n)
{
  if (n == 0 or n == 1)
    return n;
  else if (dp[n] != -1)
  {
    return dp[n];
  }
  else
  {
    ll ans = fibo(n - 1) + fibo(n - 2);
    dp[n] = ans;
    return ans;
  }
}
int main()
{
  ll n;
  cin >> n;
  ll d[n];
  memset(dp, -1, sizeof(dp));
  cout << fibo(n) << endl;
  // d[0] = 0;
  // d[1] = 1;
  // for (int i = 2; i <= n; i++)
  // {
  //   d[i] = d[i - 1] + d[i - 2];
  // }
  // cout << d[n] << endl;

  return 0;
}
