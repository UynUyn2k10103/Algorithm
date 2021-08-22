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

int n;
ll res, x, ans;
priority_queue < int, vector <int> , greater <int> > q;
const ll oo = 1e9 + 7;

void xl(){
	cin >> n;
	fori (i,0,n) {
		cin >> x;
		q.push(x);
	}
	// while (!q.empty()){
	// 	cout << q.top() << " ";
	// 	q.pop();
	// }
	ans = 0;
	while (q.size() > 1){
		res = q.top(); q.pop();
		res += q.top (); q.pop(); res %= oo;
		ans += res; ans %= oo;
		q.push(res);
	}
	while (!q.empty()){
		q.pop();
	}
	cout << ans;
}

int main(){
	fastIO();
	int T; 
	// T = 1;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}