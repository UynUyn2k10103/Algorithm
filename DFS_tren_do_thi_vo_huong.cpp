#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

int v, e, m, n;
const int oo = 1e5 + 1;
vector <vector <int> > res;
vector <int> dd;

void DFS(int u){
    dd[u] = 1;
    stack <int> s;
	s.push(u);
    cout << u;
    while(!s.empty()){
        u = s.top(); s.pop();
        fori(i, 0, res[u].size()){
            v = res[u][i];
            if(dd[v] == 0){
                //cout << u << v << "\n";
                dd[v] = 1;
                cout << " " << v;
                s.push(u);
                s.push(v);
                break;
            }
        }
    }
}

void xl(){
	int u;
	cin >> v >> e >> u;
	dd.clear();
	res.clear();
	res.resize(v+1);
	dd.resize(v+1,0);
	while (e--){
		cin >> m >> n;
		res[m].push_back (n);
		res[n].push_back (m);
	}
	DFS(u);
}

int main(){
	fastIO();
	int T;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}