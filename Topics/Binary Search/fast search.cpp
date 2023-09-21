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
    // problem link : https://codeforces.com/group/32b4mleI3c/contest/472730/problem/A
    int n,q;
    cin>>n>>q;
    int v[n];
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    while(q--)
    {
        int target;
        cin>>target;
        int low = 0;
        int high = n - 1;
        string ans = "NO";
        while(low <= high)
        {
            int mid = (low + high) / 2;
            if(v[mid] < target)
            {
                low = mid + 1;
            }
            else if(v[mid] > target)
            {
                high = mid - 1;
            }
            else
            {
                ans = "YES";
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
