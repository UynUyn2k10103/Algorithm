#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

int n;
vector <ll> res;
ll ans, x;

void xl (){
    res.clear();
    cin >> n;
    fori(i, 0, n) {
        cin >> x;
        if(x == 0) continue;
        else res.pb(x);
    }
    if(n == res.size()) x = -1;
    else x = 0;
    n = res.size();
    if(n < 2) {
        cout << "0";
        return;
    }
    if(n == 2){
        ans = res[0] * res[1];
        if(ans < 0) ans = 0;
        cout << ans;
        return;
    }
    sort(res.begin(), res.end());
    ans = max(res[0] * res[1], max(res[0] * res[1] * res[2], max(res[n - 1] * res[n-2], res[n - 1] * res[n - 2] * res[n - 3])));
    ans = max(ans, res[0] * res[1] * res[n - 1]);
    if(ans < 0) ans = 0;
    cout << ans;

}

int main(){
    fastIO();
    int T; 
    T = 1;
    //cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        //cout << "\n";
    }
}