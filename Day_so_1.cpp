#include <bits/stdc++.h>
#define ll long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F fist
#define S second
using namespace std;

int n,x;

void xl(){
	cin >> n;
	int a[n];
	cin >> a[0];
	cout << "[" << a[0];
	fori(i,1,n) {
		cin >> a[i];
		cout << " " << a[i];
	}
	cout << "]\n";
	while(-- n){
		fori(i,0,n){
			a[i] = a[i] + a[i + 1];
		}
		cout << "[" << a[0];
		fori(i,1,n) cout << " " << a[i];
		cout << "]\n";
	}
	
}
int main(){
	int T;
	cin >> T;
	while (T -- ){
		xl();
		cout << "\n";
	}
}