#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll, ll> pll;
#define sz(x) ll((x).size())
#define endl '\n'
#define fst ios::sync_with_stdio(0);cin.tie(0);
#define MOD 1000000007
#define all(v) v.begin(), v.end()
/*
 * negative numbers
 * special cases n == 1?
 * number overflow += -=
 * YES/NO/t -> solve
 * try different cases
 * don't stick with the first idea (think twice code once)
 * don't try this at home
 */
template <typename T> void printVector(vector<T> x)
{
    for(T ele : x)
    {
        cout<< ele << " ";
    }
    cout<<endl;
}
ll fstpow(ll x, ll y)
{
    if(y == 0) return 1;
    ll kk = fstpow(x, y / 2) % MOD;
    kk *= kk;
    kk %= MOD;
    if(y % 2) kk *= x;
    kk %= MOD;
    return kk;
}
ll gcd(ll x,ll y)
{
    if(x == 0 || y == 0) return max(x,y);
    if(x % y == 0) return y;
    return gcd(y, x % y);
}

int main() {
    // problem link : https://codeforces.com/group/32b4mleI3c/contest/472730/problem/B
    fst;
    int n;
    cin>>n;
    int v[n];
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    sort(v,v + n);
    int days;
    cin>>days;
    while(days--)
    {
       int k;
       cin>>k;
       auto iter = upper_bound(v,v + n,k);
       cout<< (iter - v) << endl;
    }
    return 0;

}
