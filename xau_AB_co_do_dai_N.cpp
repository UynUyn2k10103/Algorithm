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
bool a[30];

void Try (int i){
	fori(j,0,2){
		a[i] = j;
		if(i == n) {
			fori (k, 1, n + 1) 
				if (a[k]) cout << "B";
				else cout << "A";
			cout << " ";
		}
		else Try(i + 1);
	}
}

void xl(){
	cin >> n;
	Try(1);
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