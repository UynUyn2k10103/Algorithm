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

int V, E, u, a, b;
vector <vector <int> > G;
vector <bool> vs;

void DFS(){
	stack <int> st;
	cout << u;
	st.push(u);
	vs[u] = 1;
	while(!st.empty()){
		u = st.top(); st.pop();
		//cout << u << " ";
		fori(i, 0, G[u].size()){
			b = G[u][i];
			if(!vs[b]){
				cout << " " << b;
				vs[b] = 1;
				st.push(u);
				st.push(b);
				break;
			}
		}
	}
}

void xl (){
	cin >> V >> E >> u;
	G.clear();
	vs.clear();
	G.resize(V + 10);
	vs.resize(V + 10, 0);
	while (E--) {
		cin >> a >> b;
		G[a].pb(b);
	}
	DFS();
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