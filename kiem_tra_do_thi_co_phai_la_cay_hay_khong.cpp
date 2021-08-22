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

int n;
int u, v;
vector <vector <int> > G;
vector <bool> vs;

void BFS(){
    queue <int> q;
    q.push(1);
    vs[1] = 1;
    while(!q.empty()){
        u = q.front(); q.pop();
        fori(i, 0, G[u].size()){
            v = G[u][i];
            if(!vs[v]){
                vs[v] = 1;
                q.push(v);
            }
        }
    }
    fori(i, 1, n) if(!vs[i]){
        cout << "NO";
        return;
    }
    cout << "YES";
}

void xl (){
    cin >> n; n ++;
    G.clear(); vs.clear();
    G.resize(n); vs.resize(n, 0);
    fori(i, 2, n){
        cin >> u >> v;
        G[u].pb(v);
        G[v].pb(u);
    }
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