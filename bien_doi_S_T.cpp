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
const ll oo = 1e5 + 5;

int S, T, dem, res;
pair <int, int> u;
vector <bool> dd;

void BFS(){
    queue < pair<int, int> > q;
    q.push(mp(S,0));
    while(!q.empty()){
        u = q.front(); q.pop(); 
        if(res < u.S) return;
        if(u.F >= T){
            res = min (res, u.S + u.F - T );
            continue;
        }
        if(u.F == 0) continue;
        if(dd[u.F - 1] == 0) {
            q.push(mp(u.F - 1, u.S + 1));
            dd[u.F - 1] = 1;
        }
        if(dd[u.F * 2] == 0) {
            q.push(mp(u.F * 2, u.S + 1));
            dd[u.F * 2] = 1;
        }
        
    }
}

void xl (){
    cin >> S >> T; dem = 0; res = 1e9;
    dd.clear();
    dd.resize(oo, 0);
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