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

int res;
vector <vector <int> > G;
int n;
vector <bool> vs;
string s;

struct countAnphaBet{
	int f[50] = {0};
};

vector <countAnphaBet> a;

int make_Graph(countAnphaBet x, countAnphaBet y){
	int dem = 0;
	fori(i, 0, 'Z' - 'A' + 1){
		if(x.f[i] && y.f[i]) dem ++;
	}
	return dem;
}

void Try(int u, int ans, int dem){
	if(res <= ans) return;
	if(dem == n - 1){
		res = min (res, ans);
		return;
	}
	fori(i, 1, n){
		if(!vs[i]){
			vs[i] = 1;
			Try(i, ans + G[u][i], dem + 1);
			vs[i] = 0;
		}
	}
}


void xl (){
    res = 1e9;
	cin >> n; n ++;
	vs.clear(); vs.resize(n, 0);
	G.clear(); G.resize(n, vector <int> (n));
	a.clear(); a.resize(n);

	fori(i, 1, n){
		cin >> s;
		G[i][i] = s.size();
		fori(j, 0, s.size()){
			a[i].f[s[j] - 'A'] ++;
		}
	}

	int dem;
	fori(i, 1, n){
		fori(j, i + 1, n){
			dem = make_Graph(a[i], a[j]);
			G[i][j] = dem;
			G[j][i] = dem;
		}
	}

	// fori(i, 1, n){
	// 	fori(j, 1, n){
	// 		cout << G[i][j] << " ";
	// 	}
	// 	cout << "\n";
	// }
	fori(i, 1, n) {
		vs[i] = 1;
		Try(i, 0, 1);
		vs[i] = 0;
	}
	cout << res;
	
}

int main(){
    fastIO();
    int T; 
    T = 1;
    while (T -- ){
        xl();
        cout << "\n";
    }
}