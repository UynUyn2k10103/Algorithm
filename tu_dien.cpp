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

map <string, int> dic;
vector <string> res;
vector <vector <string> > a;
vector <vector <bool> > vs;
int n, m;
int u, v;

const pair<int,int> b[8] = {mp(-1,-1), mp(-1,0), mp(-1,1), mp(0,-1), mp(0, 1), mp(1, -1), mp(1, 0), mp(1, 1)};
void DFS(int i, int j, string s)
{
	if (dic[s]) res.pb(s);
	for(int k = 0; k <8; k++)
	{
		int u = i+b[k].F;
		int v = j+b[k].S;
		if (u >= 0 && u < n && v >= 0 && v < m && vs[u][v] == 0)
		{
			vs[u][v] = 1;
			DFS(u,v, s + a[u][v]);
			vs[u][v] = 0;
		}
	}
}

void xl (){
	string s;
	int k;
	res.clear(); dic.clear(); a.clear();
	cin >> k >> n >> m;
	while(k -- ){
		cin >> s;
		dic[s] = 1;
	}
	
	a.resize(n, vector <string> (m));
	fori(i, 0, n){
		fori(j, 0, m) cin >> a[i][j];
	}
	vs.clear();
	vs.resize(n, vector <bool> (m, 0));

	fori(i, 0, n){
		fori(j, 0, m) {
			// vs.clear();
			// vs.resize(n, vector <bool> (m, 0));
			vs[i][j] = 1;
			DFS(i, j, a[i][j]);
			vs[i][j] = 0;
		}
	}

	if(res.size() == 0) {
		cout << "-1";
		return;
	}

	fori(i, 0, res.size()) cout << res[i] << " ";
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