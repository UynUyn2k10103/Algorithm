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

int n, s, m, day;

int chat(int l, int r){
	int res = -1;
	while (l <= r){
		day = (l + r) / 2;
		if((day - day / 7) * n >= s*m){
			res = day;
			r = day - 1;
		}
		else l = day + 1;
	}
	if(res != -1) res -= res / 7;
	return res;
}
void xl (){
	cin >> n >> s >> m;
	cout << chat(0,s);
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