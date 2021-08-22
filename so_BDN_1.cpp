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

ull n, res, tmp, cs;

void xl (){
	cin >> n;
	if ( n < 0){
		cout << "0";
		return;
	}
	tmp = 1; res = 0; cs = 1;
	while (1){
		if(tmp > n) break;
		else res ++;
		while (tmp % 10 == 1 && tmp){
			tmp /= 10;
			cs*= 10;
		}
		//cout << tmp << " " << cs << "\n";
		if(!tmp) tmp = cs;
		else {
			tmp += 1;
			tmp *= cs;
		}
		cs = 1;
	}
	cout << res;
}

int main(){
	fastIO();
	int T; 
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}