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

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

int n;
vector <vector <string> > maGray;

void Try(int vt){
	if(vt == 0){
		maGray[0].pb("0");
		return;
	}
	if(vt == 1) {
		maGray[1].pb("0");
		maGray[1].pb("1");
		return;
	}
	Try(vt - 1);
	fori(i, 0, maGray[vt -1].size()){
		maGray[vt].pb("0" + maGray[vt - 1][i]);
	}
	forr(i, maGray[vt -1].size(), 0){
		maGray[vt].pb("1" + maGray[vt - 1][i]);
	}
}

void xl (){
	string s;
	cin >> s;
	n = s.size();
	int x, vt = 0, mul = 1;
	forr(i, s.size(), 0){
		x = s[i] - '0';
		vt += x * mul;
		mul *= 2;
	}
	maGray.resize(n + 10);
	Try (n);
	cout << maGray[n][vt];
	



	maGray.clear();
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