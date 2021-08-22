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

priority_queue <int> q;
int n, m, k;
int x;

void xl(){
	while(!q.empty()) q.pop();
	cin >> n >> m >> k;
	fori(i,0,n) {
		cin >> x;
		q.push(x);
		while(q.size() > k) q.pop();
	}
	fori(i,0,m) {
		cin >> x;
		q.push(x);
		while(q.size() > k) q.pop();
	}
	cout << q.top();
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