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

const int oo = 1e5 + 1;
vector <pair <int, int> > v;
vector <int> res;
int n, m, x;

void xl(){
	v.resize(oo, mp(0,0));
	cin >> n >> m;
	fori(i,0,n){
		cin >> x;
		v[x].F ++;
	}
	fori(i,0,m){
		cin >> x;
		v[x].S ++;
	}
	fori(i,0,oo){
		if(v[i].F || v[i].S) cout << i << " ";
		if (v[i].F && v[i].S) res.pb(i);
	}
	cout << "\n";
	fori(i,0,res.size()){
		cout << res[i] << " ";
	}
	v.clear();
	res.clear();

	
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