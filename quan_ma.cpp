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

pair <int, int> S, T;
vector <vector <bool> > vs;

int X[] = {2, 2, 1, 1, -2, -2, -1, -1};
int Y[] = {1, -1, 2, -2, 1, -1, 2, -2};

void BFS(){
	vs.clear();
	vs.resize(8, vector <bool> (8, 0));
	queue <pair <pair <int, int>, int > > q;
	q.push(mp(S, 0));
	pair <int, int> u;
	int x, y;
	while (!q.empty()){
		u = q.front().F;
		if(u == T) {
			cout << q.front().S;
			return;
		}
		fori(i, 0, 8){
			x = u.F + X[i]; y = u.S + Y[i]; 
			if(x < 0 || y < 0 || x > 7 || y > 7 || vs[x][y]) continue;
			vs[x][y] = 1;
			q.push(mp(mp(x, y), q.front().S + 1));
		}
		q.pop();
	}
	

}

void xl (){
	pair <char, int> u, v;
	cin >> u.F >> u.S >> v.F >> v.S;
	S.F = u.S - 1; S.S = u.F - 'a';
	T.F = v.S - 1; T.S = v.F - 'a';
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