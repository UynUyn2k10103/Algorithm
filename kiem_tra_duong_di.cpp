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

int N, M, v, Q;
vector <vector <int> > G;
vector <vector <bool> > ans;
vector <bool> vs;
vector <bool> check;

void BFS(int u){
	vs.clear();
	vs.resize(N + 5, 0);
	queue <int> q;
	q.push(u);
	vs[u] = 1;
	check[u] = 1;
	while (!q.empty()){
		u = q.front(); q.pop();
		fori(i, 0, G[u].size()){
			v = G[u][i];
			if(!vs[v]){
				check[v] = 1;
				vs[v] = 1;
				q.push(v);
			}
		}
	}
	ans.pb(vs);
}
void xl (){
	int u;
	cin >> N >> M;
	G.clear(); check.clear(); ans.clear();
	G.resize(N + 5); check.resize(N + 5, 0);
	while (M--){
		cin >> u >> v;
		G[u].pb(v);
		G[v].pb(u);
	}
	fori(i, 1, N + 1){
		if(!check[i]) BFS(i);
	}
	cin >> Q;
	while (Q--){
		cin >> u >> v;
		fori(i, 0, ans.size()){
			if(ans[i][u]){
				if(ans[i][v]) cout << "YES\n";
				else cout << "NO\n";
				break;
			}
		}
	}
	
	
	
}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	//cin.ignore();
	while (T -- ){
		xl();
		//cout << "\n";
	}
}