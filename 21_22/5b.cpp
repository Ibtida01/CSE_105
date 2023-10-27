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

#define SIZE 10
class KStacks
{
    public:
    int arr[SIZE];
    int top1=0,top2=SIZE-1;
    int currsz1=0,currsz2=0;

    void push1(int x)
    {
        if(currsz1+currsz2>=SIZE)
        {
            cout<<"overflow\n";
            return;
        }
        arr[top1++]=x;
        ++currsz1;
    }
    int pop1()
    {
        if(currsz1==0){
            cout<<"underflow"<<endl;
            return -1;
        }
         --currsz1;
        return arr[top1--];

    }
    void push2(int x)
    {

        if(currsz1+currsz2>=SIZE)
        {
            cout<<"overflow\n";
            return;
        }
        arr[top2--]=x;
        ++currsz2;

    }
    int pop2()
    {
        if(currsz2==0)
        {
            cout<<"underflow\n";
            return -1;
        }
          --currsz2;
        return arr[top2++];

    }
};

void solve()
{
    KStacks s;
    s.push1(5);
    s.push1(10);
    s.push1(13);
    s.push1(19);
    s.push2(100);
    s.push2(90);
    s.push2(80);
    s.push2(70);
    s.push2(60);
    s.push2(50);
    s.push1(1000);
    //dbg(s.currsz1);
    s.pop1();
    //dbg(s.currsz1);
    s.push1(10000);
    for(int i=0;i<10;i++)
        cout<<s.arr[i]<<" ";

}

int main()
{
    fast_io;
//    int t;
//    cin>>t;
//    while(t--)
        solve();
}


