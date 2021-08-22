#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

ll toNum(string s){
	ll res = 0, mul = 1;
	forr(i,s.size(), 0){
		res += mul * (int)(s[i] - '0');
		mul *= 2;

	}
	return res;
}

void xl(){
	string s;
	cin >> s;
	ll res = toNum(s);
	cin >> s;
	res *= toNum(s);
	cout << res;
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