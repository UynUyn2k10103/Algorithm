#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

ll n, x, y, z;
pair <ll, ll> u;
ll res;

void BFS(){
    queue <pair <int, int> > q;

    vector <ll> vs; vs.pb(0);
    fori(i, 1, 500) {
        vs.pb(i * x);
        q.push(mp(i, i * x));
    }
    while (!q.empty()){
        u = q.front(); q.pop(); vs[u.F] = min(u.S, vs[u.F]);
        u.S = vs[u.F];
        if(u.F >= n){
            res = min(res, u.S + (u.F - n) * y);
            continue;
        }
        if(u.S > res) continue;
        if(vs[u.F + 1] > u.S + x) {
            vs[u.F + 1] = u.S + x;
            q.push(mp(u.F + 1, u.S + x));
        }
        if(u.F - 1 > 1){
            if(vs[u.F - 1] > u.S + y) q.push(mp(u.F - 1, u.S + y));
            vs[u.F - 1] = vs[u.F] + y;
        }

        if(vs[u.F * 2] > u.S + z) {
            q.push(mp(u.F * 2, u.S + z));
            vs[u.F * 2] = u.S + z;
        }
    }
    
}

void xl (){
    cin >> n >> x >> y >> z;
    res = n * x;
    BFS();
    cout << res;
}

int main(){
    fastIO();
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        xl();
        cout << "\n";
    }
}