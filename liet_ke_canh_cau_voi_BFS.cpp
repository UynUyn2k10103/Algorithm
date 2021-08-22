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

int V, E, lien_thong;
vector <vector <int> > G;
vector <bool> vs;

bool cmp(int u, int v, int x, int y){
	if((u == x &&  v == y ) || (v == x && u == y) ) return 0;
	return 1;
}

void BFS(int u, int x, int y){
	vs[u] = 1;
	queue <int> q;
	q.push(u);
	int v;

	while(!q.empty()){
		u = q.front(); q.pop();
		fori(i, 0, G[u].size()){
			v = G[u][i];
			if(vs[v] == 0 && cmp (u, v, x, y) ){
				vs[v] = 1;
				q.push(v);
			}
		}
	}
};

void canh_cau(int u, int v){
	int dem = 0;
	vs.clear();
	vs.resize(V + 10, 0);

	fori(i, 1, V + 1){
		if(vs[i] == 0){
			dem ++;
			BFS(i, u, v);
		}
	}
	//cout << u << " "<< v << " "<< dem << "\n";
	if(dem > lien_thong) cout << u << " " << v << " ";
}

void xl (){
	cin >> V >> E;

	G.clear();
	vs.clear();
	G.resize(V + 10);
	vs.resize(V + 10, 0);
	int u, v;

	while(E -- ){
		cin >> u >> v;
		G[u].pb(v);
		G[v].pb(u);
	}
	//cout << V << " " << E;

	lien_thong = 0;
	fori(i, 1, V + 1){
		if(vs[i] == 0){
			lien_thong ++;
			BFS(i, -1, -1);
		}
	}
	fori(i, 1, V + 1){
		fori (j, 0, G[i].size()){
			if(i > G[i][j]) continue;
			else canh_cau(i, G[i][j]);
		}
	}
	//cout << lien_thong;
	
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