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

int V, E;
vector <vector <int> > G;
vector <int> vs;
bool check;

void DFS(int u){
    vs[u] = 1;
    for (int i : G[u]){
        if(vs[i] == 1){
            check = 1;
            return;
        }
        if(!vs[i]) {
            vs[i] = 1;
            DFS(i);
        }
    }
    vs[u] = 2;
}

void xl (){
    cin >> V >> E; check = 0;
    int u, v;

    G.clear();
    G.resize(V + 1);

    while (E--){
        cin >> u >> v;
        G[u].pb(v);
    }

    vs.clear();
    vs.resize(V + 1, 0);

    fori(i, 1, V + 1) {
        if(check) break;
        if(!vs[i]) DFS(i);
    }

    (check)? cout << "YES" : cout << "NO"; 
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