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

int n, m, v, a;
vector <vector <int> > G;
vector <bool> vs;
vector <pair <int, int> > T;

void DFS(int u){
    vs[u] = 1;
    fori(i, 0, G[u].size()){
        v = G[u][i];
        if(!vs[v]){
            T.pb(mp(u, v));
            DFS(v);
        }
    }
}

void DfsTree (){
    cin >> n >> m;
    G.clear(); vs.clear(); T.clear();
    G.resize(n + 1); vs.resize(n + 1, 0);

    int u;
    cin >> u;

    while(m --){
        cin >> a >> v;
        G[a].pb(v);
        G[v].pb(a);
    }

    DFS(u);
    fori(i, 1, n + 1) {
        if(!vs[i]){
            cout << "-1\n";
            return;
        }
    }

    fori(i, 0, T.size()){
        cout << T[i].F << " " << T[i].S << "\n";
    }
    
}

int main(){
    fastIO();
    int T; 
    //T = 1;
    cin >> T;
    //cin.ignore();
    while (T -- ){
        DfsTree();
        //cout << "\n";
    }
}