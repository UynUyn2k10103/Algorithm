#include <bits/stdc++.h>
#define FastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

int n, x, res;
vector <int> f;

void solve(){
	cin >> n; res = -1;
	f.clear();
	f.resize(n + 1, 0);

	//f[0] = 1;
	for(int i = 0; i < n; i++){
		cin >> x;
		f[x] = f[x - 1] + 1;
	}

	for(int i = 1; i <= n; i++){

		//cout << f[i];
		res = max(res, f[i]);
	}
	cout << n - res;
}

int main(){
	int T = 1;
	//cin >> T;
	while(T --){
		solve();
		cout << "\n";
	}
}