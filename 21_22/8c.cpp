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

void revStack(stack<int>& s,int top)
{
    if(top==0)
        return;
    int x=s.top();
    s.pop();
    revStack(s,top-1);
    cout<<x<<endl;
}
void solve()
{
  stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    revStack(s,5);
}

int main()
{
    //fast_io;
    int t;
    cin>>t;
    while(t--)
        solve();
}


