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

int V, E, u, a, v;
vector <vector <int> > G;
vector <bool> vs;

void BFS(){
	queue <int> q;
	q.push(u);
	vs[u] = 1;
	cout << u;
	while (!q.empty()){
		u = q.front(); q.pop();
		fori(i, 0, G[u].size()){
			v = G[u][i];
			if(!vs[v]){
				cout << " " << v;
				vs[v] = 1;
				q.push(v);
			}
		}
	}
	
}

void xl (){
	vs.clear();
	G.clear();
	cin >> V >> E >> u;
	G.resize(V + 10);
	vs.resize(V + 10, 0);
	while (E--){
		cin >> a >> v;
		G[a].pb(v);
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