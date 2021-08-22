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
int res;

void xl(){
	cin >> n;
	res = n / 1000; n %= 1000; 
	res += n / 500; n %= 500; 
	res += n / 200; n %= 200; 
	res += n / 100; n %= 100;  
	res += n / 50; n %= 50;
	res += n / 20; n %= 20;
	res += n / 10; n %= 10;
	res += n / 5; n %= 5;
	res += n / 2; res += n % 2;
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