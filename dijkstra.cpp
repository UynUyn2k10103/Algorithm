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

int V, E, u, v, w, ww, bd;
vector < vector <pair <int, int> > > G;
vector <bool> vs;
vector <int> d;

struct cmp {
    bool operator() (pair<int,int> a,pair<int,int> b)
    {
        return a.S>b.S;
    }
};

void Dijkstra(int bd){
	priority_queue <pair <int, int>, vector <pair <int, int> >, cmp> q;
	q.push(mp(bd, 0));
	d[bd] = 0;
	while (!q.empty()){
		u = q.top().F; w = q.top().S; q.pop();
		vs[u] = 1;
		fori(i, 0, G[u].size()){
			v = G[u][i].F;
			if(!vs[v]){
				ww = G[u][i].S;
				d[v] = min(d[v], w + ww);
				q.push(mp(v, d[v]));
			}
			
		}
	}
	fori(i, 1, V + 1) cout << d[i] << " ";
}

void xl (){
	cin >> V >> E >> bd;
	d.clear(); d.resize(V + 5, 1e9);
	G.clear(); G.resize(V + 5);
	vs.clear(); vs.resize(V + 5);
	while (E--){
		cin >> u >> v >> w;
		G[u].pb(mp(v, w));
		G[v].pb(mp(u, w));
	}
	Dijkstra(bd);
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