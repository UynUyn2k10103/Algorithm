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
vector <bool> vs;
bool check;

void BFS(int u){
    queue < pair <int, int> > q;
    q.push(mp(u, 0));
    vs[u] = 1;
    
    int pre, v;

    while (!q.empty()){
        u = q.front().F; pre = q.front().S; q.pop();
        fori(i, 0, G[u].size()){
            v = G[u][i];
            if(!vs[v]){
                vs[v] = 1;
                q.push(mp(v,u));
            }
            else if(v != pre){
                check = 1;
                return;
            }
        }
    }
    
}

void xl (){
    cin >> V >> E; check = 0;
    int u, v;

    G.clear();
    G.resize(V + 1);

    while (E--){
        cin >> u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }

    vs.clear();
    vs.resize(V + 1, 0);

    // if(kt != 0 ) {
    //     cout << "NO";
    //     return;
    // }
    fori(i, 1, V + 1) {
        if(check) break;
        else if(!vs[i]) BFS(i);
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