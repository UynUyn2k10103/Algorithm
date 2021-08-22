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
int a[oo];
int n, k;
vector < pair <int, int> > v;

bool cmp(pair <int, int> x, pair <int, int> y){
	if(x.F == y. F) return x.S < y.S;
	return x.F > y.F;
}

void xl(){
	cin >> n;
	fori(i,0,n){
		cin >> k;
		a[k] ++;
	}
	fori(i,0,oo){
		if(a[i]) {
			v.pb (mp(a[i],i));
			a[i] = 0;
		}
	}
	sort (v.begin(), v.end(), cmp);
	fori(i,0, v.size()){
		fori(j,0,v[i].F) cout << v[i].S << " ";
	}
	v.clear();
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