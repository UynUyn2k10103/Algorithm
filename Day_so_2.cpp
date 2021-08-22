#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

int n;
vector <vector <int> > v;
vector <int> a;

void xl(){
	cin >> n;
	a.resize(n);
	fori(i,0,n) cin >> a[i];
	v.pb(a);
	while(-- n){
		fori(i,0,n) a[i] = a[i] + a[i + 1];
		v.pb(a);
	}
	n = 1;
	forr(i,v.size(), 0){
		cout << "[" << v[i][0];
		fori(j,1,n) cout << " " << v[i][j];
		cout << "] ";
		n++;
	}
	v.clear();
	a.clear();
	
}
int main(){
	int T;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}