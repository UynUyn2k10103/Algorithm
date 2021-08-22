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
vector < vector <int> > G;
int lien_thong;
vector <bool> vs;

void BFS(int u){
	queue <int> q;
	q.push(u);
	vs[1] = 1;
	while(!q.empty()){
		u = q.front(); q.pop();
		fori(i, 0, G[u].size()){
			int v = G[u][i];
			if(vs[v] == 0){
				vs[v] = 1;
				q.push(v);
			}
		}
	}
}

void xl (){
	cin >> V >> E;
	lien_thong = 0;
	int u, v;
	G.clear();
	G.resize(V + 10);
	while(E--){
		cin >> u >> v;
		G[u].pb(v);
		G[v].pb(u);
	}
	vs.clear();
	vs.resize(V + 1, 0);
	fori(i, 1, V + 1){
		if(vs[i] == 0) {
			lien_thong ++;
			BFS(i);
		}
	}
	cout << lien_thong;
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