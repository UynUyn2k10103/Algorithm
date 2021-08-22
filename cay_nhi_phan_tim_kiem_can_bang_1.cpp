#include <bits/stdc++.h>
using namespace std;

int n;
vector <int> a;

void solve(){
	cin >> n;
	a.clear();
	a.resize(n);

	for(int i = 0; i < n; i++){
		cin >> a[i];
	}
	sort(a.begin(), a.end()); 
	cout << a[(n - 1) / 2];
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int T;
	cin >> T;
	while(T--){
		solve();
		cout << "\n";
	}
}