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

priority_queue <int, vector <int>, greater <int> > q;
int n, x;
bool check;
ll a, b;

void xl(){
	cin >> n;
	fori(i,0,n){
		cin >> x;
		q.push(x);
	}
	a = 0; b = 0;
	while(!q.empty()){
		if (check) a = a * 10 + q.top();
		else b = b * 10 + q.top();
		q.pop();
		check = !check;
	}
	cout << a + b;

	
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