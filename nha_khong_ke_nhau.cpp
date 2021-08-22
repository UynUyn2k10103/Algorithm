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
vector <ll> v;

void xl(){
	cin >> n;
	v.resize(n);
	if(n == 1){
		cin >> v[0];
		cout << v[0];
		return;
	}
	if(n == 2){
		cin >> v[0] >> v[1];
		cout << max(v[0], v[1]);
		return;
	}
	cin >> v[0] >> v[1] >> v[2];
	v[2] += v[0];
	fori(i,3,n){
		cin >> v[i];
		v[i] += max(v[i-2],v[i-3]);
	}
	cout << max(v[n-1], max(v[n-2], v[n-3]));
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