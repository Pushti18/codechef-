
#include<bits/stdc++.h>
#include<iostream>
#include<stdint.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define FASTIO ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define pb push_back
#define ff first
#define ss second
#define MP make_pair
#define rep(i,a,b) for(int i=a; i<b; i++)
#define r(i,a,b) for(ll i=a; i>=b; i--) 
#define Print(v) for(auto x : v) cout << x << " ";cout << endl;
#define ordered_set tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>
const int mod = 1e9+7;
const long long INF = 1e12;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<char> vc;
typedef pair<int,int> pi;
typedef vector<pair<ll,ll>> vp;
ll lcm(ll a, ll b){ return (a*b) / __gcd(a,b);}
ll Pow(ll x, ll y){ if(y == 0)return 1; ll temp = pow(x, y/2);if(y&1) return temp*temp*x;else return temp*temp; }
int pw(int a, int b, int mod){ int res = 1; while(b>0){if(b&1){res = (res * 1LL * a) % mod;}a = (a * 1LL * a) % mod; b>>=1;} return res;}
int sieve[10005];
void build(){memset(sieve, 0, sizeof(sieve));for(int x = 2; x <= 10005; x++){if(sieve[x]) continue;for(int y = x*x; y <= 10005; y += x){sieve[y] = 1;}}}
// ----------------------------------------------------------------------------------------------------------------------------------------------------

void solve()
{
    ll n;
    cin >> n;
    vl a(n+1), b(n+1);
    ll o1, o2;
    o1 = o2 = 0;
    ll sum = 0;
    rep(i, 1, n+1){
        cin >> a[i];
        sum += a[i];
        if(a[i]&1) o1++;
    }
    rep(i, 1, n+1){
        cin >> b[i];
        sum += b[i];
        if(b[i]&1) o2++;
    }

    sum -= abs(o1 - o2);
    cout << sum/2 << endl;

}


int32_t main()
{
    FASTIO;
    int t; cin>>t;
    int k = 1;
    while(t--)
    {
        // cout << "Case #" << k++ <<": ";
        solve();       
    }

    return 0;
}


