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

int n;
vector <int> a, b;

void xl(){
	cin >> n;
	a.resize(n); b.resize(n);
	fori(i,0,n){
		cin >> a[i];
		b[i] = a[i];
	}
	sort(b.begin(), b.end());
	fori(i, 0, n){
		if(a[i] == b[i] || a[i] == b[n - i - 1] ) continue;
		else {
			cout << "No";
			return;
		}
	}
	cout << "Yes";
	a.clear(); b.clear ();
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