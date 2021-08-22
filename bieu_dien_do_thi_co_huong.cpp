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

void xl(){
	cin >> v >> e;
	vector <vector <int> > res(v+1);
	while (e--){
		cin >> m >> n;
		res[m].push_back (n);
	}
	fori(i,1,v + 1){
		cout << i << ":";
		for(int j = 0; j < res[i].size(); j++) cout << " " << res [i][j];
		cout << "\n";
	}
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