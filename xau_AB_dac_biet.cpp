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
vector <string> v;
int n, k, i;

bool check(){
	int dem;
	fori(j,0,n) {
		dem = 0;
		while(s[j] == 'A' && j < n){
			dem ++;
			j ++;
		}
		if(dem == k) return 1;
	}
	return 0;
}

void ahihi(){
	while (1){
		if(check()) v.pb(s);
		i = n - 1;
		while(s[i] == 'B' && i >= 0) {
			s[i] = 'A';
			i --;
		}
		if(i < 0) return;
		s[i] = 'B';
	} 
}

void xl(){
	cin >> n >> k;
	s.resize(n, 'A');
	ahihi();
	cout << v.size() << "\n";
	fori(j,0,v.size()) cout << v[j] << "\n";
}

int main(){
	fastIO();
	int T; 
	T = 1;
	//cin >> T;
	while (T -- ){
		xl();
		//cout << "\n";
	}
}