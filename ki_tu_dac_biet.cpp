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

string s;
ull x, n, tmp;

void xl(){
	cin >> s >> n;
	x = s.size();
	while (x < n){
		x *= 2;
	}
	//cout << x;
	while(x > s.size()){
		tmp = x/2;
		if(n > tmp){
			n-= tmp;
			n--;
			if(n == 0) n = tmp;
		}
		x /= 2;
	}
	cout << s[n - 1];
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