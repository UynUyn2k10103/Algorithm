#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
#define endl "\n"
using namespace std;

int v, e, st, ed, m, n, u;
vector <vector <int> > G;
vector <bool> visit;
vector <int> trace;
bool ok;

void res(){
    stack <int> s;
    s.push(ed);
    while(ed != st){
        ed = trace[ed];
        s.push(ed);
    }
    while(!s.empty()){
        cout << s.top() <<" ";
        s.pop();
    }
}

void BFS(){
    queue <int> q;
    u = st;
    q.push(u);
    visit[st] = 1;
    while (!q.empty())
    {
        u = q.front();
        q.pop();
        fori(i, 0, G[u].size()){
        v = G[u][i];
        if(visit[v] == 0) {
            visit[v] = 1;
            q.push(v);
            trace[v] = u;
        }
        if(v == ed){
            ok = 0;
            res();
            return;
        }
        }
    }

}

void xl(){
    cin >> v >> e >> st >> ed;
    G.resize(v + 1);
    visit.resize(v + 1, 0);
    trace.resize(v + 1, 0);
    while(e -- ){
        cin >> m >> n;
        G[m].pb(n);
    } 
    ok = 1;
    BFS(); 
    if(ok) cout << "-1";
    G.clear();
    visit.clear();
    trace.clear();

}
int main (){
    fastIO();
    int T;
    T = 1;
    cin >> T;
    while (T--){
        xl();
        cout << endl;
    }
}