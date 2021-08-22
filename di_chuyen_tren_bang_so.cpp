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

int n, m;
vector < vector <int> > a;
vector < vector <bool> > vs;

int X[] = {-1, 1, 0, 0};
int Y[] = {0, 0, -1, 1};

struct cmp{
	bool operator () (pair <int, pair <int, int> > g, pair <int, pair <int, int> > f){
		return g.F > f.F;
	}
};

void BFS(){
	priority_queue < pair <int, pair <int, int> >, vector <pair <int, pair <int, int> > >, cmp> q;
	q.push(mp(a[0][0], mp(0, 0)));
	vs[0][0] = 1;
	while (!q.empty()){
		int w = q.top().F;
		pair <int, int> u = q.top().S;
		q.pop();
		if(u. F == n - 1 && u.S == m - 1){
			cout << w;
			return;
		}
		fori(i, 0, 4){
			pair <int, int> v;
			v = mp(u.F + X[i], u.S + Y[i]);
			if(v.F < n && v.S < m && v.F >= 0 && v.S >= 0 && vs[v.F][v.S] == 0){
				vs[v.F][v.S] = 1;
				q.push(mp(w + a[v.F][v.S], v));
			}
		}
	}
	
}


void xl (){
	cin >> n >> m;
	a.clear(); 
	a.resize(n, vector <int> (m));
	fori(i, 0, n) {
		fori(j, 0, m) cin >> a[i][j];
	}

	vs.clear(); 
	vs.resize(n, vector <bool> (m, 0));

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