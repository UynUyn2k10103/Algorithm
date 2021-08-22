#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define ull unsigned long long
using namespace std;

int n, m, k;
vector <int > f;
vector <pair <int, int> > x;
ll res;

void xl(){
	cin >> n >> m; int dem[4] = {0}; 
	f.resize(1001,0);
	fori(i,0,n) {
		cin >> k;
		f[k] ++;
	}
	fori(i,0,1001){
		if(f[i]){
			x.push_back(mp(i,f[i]));
			f[i] = 0;
		}
	}
	fori(i,0,m) {
		cin >> k;
		f[k] ++;
		if(k < 4) dem[k] ++;
	} 
	res = 0;
	fori(i,0,1001){
		res += f[i];
		f[i] = m - res;
	}
	res = 0;
	fori(i,0,x.size()){
		if(x[i].F == 0) continue;
		if(x[i].F == 1) res += dem[0] * x[i].S;
		else if(x[i].F == 2) res = res + (dem[0] + dem[1] + f[4]) * x[i].S;
		else if (x[i].F == 3) res += (m - dem [3]) * x[i].S;
		else res += (dem[0] + dem[1] + f[x[i].F]) * x[i].S;
	}
	cout << res;
	x.clear(); f.clear();
}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}