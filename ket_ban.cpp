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

vector <vector <int> > G;
vector <bool> vs;
int res, ans;
int n, m, v;

void BFS(int u){
    queue <int> q;
    q.push(u); vs[u] = 1;
    ans = 1;
    while (!q.empty()){
        u = q.front(); q.pop();
        fori(i, 0, G[u].size()){
            v = G[u][i];
            if(!vs[v]){
                ans ++;
                vs[v] = 1;
                q.push(v);
            }
        }
    }
    res = max(ans, res);
}

void xl (){
    int u; res = 0;
    G.clear(); vs.clear();
    cin >> n >> m;
    G.resize(n + 10);
    vs.resize(n + 10, 0);
    while (m --){
        cin >> u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }
    fori(i, 1, n + 1){
        if(!vs[i]) BFS(i);
    }
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