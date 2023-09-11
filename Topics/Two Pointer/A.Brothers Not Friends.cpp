#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
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
 * try different cases
 * don't stick with the first idea (think twice code once)
 * don't try this at home
 */
// احْرِصْ علَى ما يَنْفَعُكَ، وَاسْتَعِنْ باللَّهِ وَلَا تَعْجِزْ، وإنْ أَصَابَكَ شَيءٌ، فلا تَقُلْ: لو أَنِّي فَعَلْتُ كانَ كَذَا وَكَذَا، وَلَكِنْ قُلْ: قَدَرُ اللهِ وَما شَاءَ فَعَلَ؛ فإنَّ (لو) تَفْتَحُ عَمَلَ الشَّيْطَانِ
int main()
{
    // problem url : https://codeforces.com/group/32b4mleI3c/contest/471502/problem/A
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    int i = 0,j = 0;
    while( i < n || j < m)
    {
        if(j == m || (i < n && a[i] < b[j]))
        {
            cout<< a[i] << " ";
            i++;
        }
        else
        {
            cout<< b[j] << " ";
            j++;
        }
    }
    cout<<endl;
    return 0;
}