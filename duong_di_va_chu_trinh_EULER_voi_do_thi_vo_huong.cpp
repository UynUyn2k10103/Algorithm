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
int kt;

void BFS(){
    vs.clear();
    vs.resize(V + 1, 0);

    queue <int> q;
    q.push(1);
    vs[1] = 1;
    int u, v;

    while (!q.empty()){
        u = q.front(); q.pop();
        fori(i, 0, G[u].size()){
            v = G[u][i];
            if(!vs[v]){
                vs[v] = 1;
                q.push(v);
            }
        }
    }

    fori(i, 1, V + 1) if(!vs[i]) {
        cout << "0";
        return;
    }
    cout << kt;
    
}

void xl (){
    cin >> V >> E; kt = 0;
    int u, v;

    G.clear();
    G.resize(V + 1);

    while (E--){
        cin >> u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }

    fori(i, 1, V + 1) if (G[i].size() % 2) kt ++;
    if(kt == 0) kt = 2;
    else if(kt != 2) {
        cout << "0";
        return;
    }
    else kt = 1;
    BFS();


    
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