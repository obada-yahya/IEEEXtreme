#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
#define sz(x) int((x).size())
#define endl '\n'
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
#define fst ios::sync_with_stdio(0);cin.tie(0);
#define MOD 1000000007
/*
 * negative numbers
 * special cases n == 1?
 * number overflow += -=
 * YES/NO/t -> solve
 * try different cases
 * don't stick with the first idea (think twice code once)
 */
int main()
{
    // problem link : https://codeforces.com/group/32b4mleI3c/contest/473436/problem/E
    fst;
    ull n,x,y;
    cin>>n>>x>>y;
    ll low = 1;
    ll high = 1e18 + 5;
    ll mn = LLONG_MAX;
    while(low <= high)
    {
        ll mid = low + (high - low ) / 2;
        ll total = mid / x + mid / y;
        if(total >= n)
        {
            mn = min(mid,mn);
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    cout<< mn << endl;
    return 0;
}
