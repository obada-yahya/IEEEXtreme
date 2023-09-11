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
    // problem url : https://codeforces.com/group/32b4mleI3c/contest/472038/problem/A
    int n,k;
    cin>>n>>k;
    int v[n];
    for(int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    map<int,int> mp;
    int left = 0;
    int right = 0;
    int mx = 0;
    while(right < n)
    {
        mp[v[right]]++;
        int small = (*mp.begin()).first;
        int high = (*(--mp.end())).first;
        while(high - small > k)
        {
            mp[v[left]]--;
            if(mp[v[left]] == 0)
            {
                mp.erase(v[left]);
            }
            left++;
            small = (*mp.begin()).first;
            high = (*(--mp.end())).first;
        }
        mx = max(mx, right - left + 1);
        right++;
    }
    cout<< mx << endl;
    return 0;
}