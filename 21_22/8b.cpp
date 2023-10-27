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
//bool isEqualD(double x,double y)
//{
//    return (abs(x-y)<EPS) ? true : false;
//}
//long long binpow(long long a, long long b) {
//    long long res = 1;
//    while (b > 0) {
//        if (b & 1)
//            res = res * a;
//        a = a * a;
//        b >>= 1;
//    }
//    return res;
//}

void solve()
{
    int n,e;
    cin>>n>>e;
    //total possible edge nC2 right?
    //we have e edges right?
    //how many left?
    cout<<n*(n-1)/2-e<<endl;
}

int main()
{
    //fast_io;
    int t;
    cin>>t;
    while(t--)
        solve();
}


