//using Kadane's algo
#include <bits/stdc++.h>
  #include <iostream>
  #include <cmath>
  #include<iomanip>
  #define dbg(x) cout << #x << " = " << x << endl;
  #define fast_io ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
  #define pans cout << ans << "\n";
  #define endl "\n"
  #define pb push_back
  #define mp make_pair
  #define MAX 1000000000
  #define pii pair<int,int>
  #define EPS 1e-9
  // const ll mod=1e9+7;
  typedef long long int ll;
  typedef unsigned long long int ull;
  typedef long double ld;
  using namespace std;

  void solve()
  {
   ll n;
   cin>>n;
   vector<ll> a(n),ssum;
   for(auto &it:a)
    cin>>it;
    ll csum=0,mx=LLONG_MIN;
    for(auto it:a)
    {
      csum+=it;
      if(csum<0) {
        csum=0;
        mx=max(mx,it);
      }
      else {
        mx=max(csum,mx);
      }
    }
      // dbg(csum);
      // dbg(mx);
    
    cout<<mx<<endl;
  }

  int main()
  {
      // fast_io;
      // int t;
      // cin>>t;
      // while(t--)
   solve();
  }
