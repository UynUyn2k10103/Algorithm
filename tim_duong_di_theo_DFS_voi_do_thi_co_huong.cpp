#include<bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define endl "\n"
using namespace std;

int V, E, st, en, v, u;
vector < vector <int> > G;
vector <bool> vis;
vector <int> trace;
bool ok;

void DFS(){
    stack <int> s;
    s.push(st);
    while (!s.empty()){
        u = s.top();
        s.pop();
        fori(i,0,G[u].size()){
            v = G[u][i];
            if(vis[v] == 0){
                vis[v] = 1;
                s.push(u);
                s.push(v);
                trace[v] = u;
                if(v == en){
                    ok = 0;
                    stack <int> res;
                    res.push(en);
                    while(en != st){
                        en = trace[en];
                        res.push(en);
                    }
                    while(!res.empty()){
                        cout << res.top() <<" ";
                        res.pop();
                    }
                    return;
                }
                break;
            }
        }
    }
}

void xl(){
    ok = 1;
    int u;
    cin >> V >> E >> st >> en;
    G.resize(V + 100);
    vis.resize(V + 100, 0);
    trace.resize(V + 100);

    while(E --){
        cin >> u >> v;
        G[u].pb(v);
    }
	vis[st] = 1;
    DFS();
    if(ok) cout << "-1";

    G.clear();
    vis.clear();
    trace.clear();
}

int main(){
    int T;
    cin >> T;
    while(T--){
        xl();
        cout << "\n";
    }
}