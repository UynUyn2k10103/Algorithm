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
vector < pair <int, int> > G;
vector <bool> vs;

// bool BFS(int u){
// 	vs.clear();
// 	vs.resize(V + 10, 0);

// 	queue <int> q;
// 	q.push(u);
// 	vs[u] = 1;
// 	while(!q.empty()){
// 		u = q.front(); q.pop();
// 		if(G[u].size() % 2) return 0;
// 		fori(i, 0, G[u].size()){
// 			int v = G[u][i];
// 			if(vs[v] == 0){
// 				vs[v] = 1;
// 				q.push(v);
// 			}
// 		}
// 	}
// 	fori(i, 1, V + 1){
// 		if(vs[i] == 0) return 0;
// 	}
// 	return 1;
// }

void xl (){
	cin >> V >> E;
	int u, v;
	G.clear();
	G.resize(V + 10, mp(0, 0));
	while(E--){ // F la ban bac vao, S la ban bac ra
		cin >> u >> v;
		G[u].S ++;
		G[v].F ++;
	}
	fori(i, 1, V + 1){
		if(G[i].F != G[i].S) {
			cout << "0";
			return;
		}

	}
	cout << "1";
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