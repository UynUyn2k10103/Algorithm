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

int n, k, x, sum;
vector <int> a;
vector < vector <int> > L;

int sub(int t, int u){
	if(t - u < 0) return t - u + k;
	return t - u;
}

void xl (){
	cin >> n >> k;
	a.clear();
	sum = 0;
	fori (i, 0, n) {
		cin >> x;
		x %= k;
		if(x){
			a.pb(x);
			sum += x;
			sum %= k;
		}
	}
	if(a.size() < 2){
		cout << n - a.size();
		return;
	}
	//cout << a.size();
	//fori (i, 0, a.size()) cout << a[i] << " ";
	//cout << " \n";
	L.clear();
	L.resize(a.size() + 1);
	fori(i, 0, L.size()) L[i].resize(k, k);
	L[0][0] = 0;
	fori(i, 1, L.size() ){
		fori(t, 0, k){
			L[i][t] = min(L[i - 1][t], L[i - 1][sub(t, a[i - 1])] + 1);
		}
	}
	// fori(i, 1, L.size()){
	// 	fori(t, 0, k){
	// 		cout << L [i][t] << " ";
	// 	}
	// 	cout << "\n";
	// }
	cout << n -  L[a.size()][sum];
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