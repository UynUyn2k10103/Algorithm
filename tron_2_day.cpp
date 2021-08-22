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

int n, m, x;
priority_queue <int, vector <int>, greater <int> > q;

void xl(){
	cin >> n >> m;
	while(n--){
		cin >> x;
		q.push(x);
	}
	while(m--){
		cin >> x;
		q.push(x);
	}
	while(!q.empty()){
		cout << q.top() << " ";
		q.pop();
	}
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