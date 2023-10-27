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

vector<int> adjList[100];
bool visited[100];
int mxHeight=0;
void dfs(int curnode,int height)
{
    mxHeight=max(mxHeight,height);
    visited[curnode]=true;
    for(auto neighbour:adjList[curnode])
    {
        if(visited[neighbour]==false)
            {
                dfs(neighbour,height+1);

            }
    }
}
void solve()
{
  int arr[8]={-1,0,0,0,3,1,1,2};
  int source;
  for(int i=0;i<8;i++)
  {
      if(arr[i]==-1)
        source=i;
      adjList[arr[i]].push_back(i);
  }
//  for(int i=0;i<7;i++)
//  {
//      for(auto it:adjList[i])
//        cout<<it<<" ";
//      cout<<endl;
//  }
    dfs(source,0);
    cout<<mxHeight+1<<endl;
}

int main()
{
    fast_io;
//    int t;
//    cin>>t;
//    while(t--)
        solve();
}


