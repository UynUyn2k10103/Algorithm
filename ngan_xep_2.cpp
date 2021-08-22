#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

void fastIO(){
	ios_base::sync_with_stdio(0); 
	cin.tie(0); 
	cout.tie(0);
}

stack <int> q;
int x;
string s;

void xl(){
	cin >> s;
	if (s == "PUSH") {
		cin >> x;
		q.push (x);
		return;
	}
	if (s == "POP") {
		if (!q.empty()) q.pop();
		return;
	}
	if(q.empty()) cout << "NONE\n";
	else cout << q.top() << "\n";
}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	while (T -- ){
		xl();
		//cout << "\n";
	}
}