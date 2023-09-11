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
 * YES/NO/t -> solve
 * try different cases
 * don't stick with the first idea (think twice code once)
 * don't try this at home
 */
// احْرِصْ علَى ما يَنْفَعُكَ، وَاسْتَعِنْ باللَّهِ وَلَا تَعْجِزْ، وإنْ أَصَابَكَ شَيءٌ، فلا تَقُلْ: لو أَنِّي فَعَلْتُ كانَ كَذَا وَكَذَا، وَلَكِنْ قُلْ: قَدَرُ اللهِ وَما شَاءَ فَعَلَ؛ فإنَّ (لو) تَفْتَحُ عَمَلَ الشَّيْطَانِ
int main()
{
    // problem url : https://codeforces.com/group/32b4mleI3c/contest/471771/problem/A
    int n,k;
    cin>>n>>k;
    int v[n];
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int left = 0;
    int right = 0;
    int mx = 0;
    int cnt = 0;
    while(right < n)
    {
        if(v[right] == 1)
            cnt++;
        while(right - left + 1 > k)
        {
            if(v[left] == 1)
                cnt--;
            left++;
        }
        mx = max(mx,cnt);
        right++;
    }
    cout<< mx << endl;
    return 0;
}