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

string s;
int d, n, k;
vector <int> f;

void xl (){
	cin >> d >> s;
	n = s.size();
	priority_queue <int> q;
	f.clear();
	f.resize(300, 0);
	fori(i, 0, n){
		f[s[i]] ++; 
	}
	fori(i, 0, 300){
		if (f[i]) q.push(f[i]);
	}
	f.clear();
	f.resize(n, 0);
	int vt = 0;
	while(!q.empty()){
		k = q.top(); q.pop();
		fori(i, vt, n){
			if(f[i] == 0){
				vt = i;
				while(k --){
					if(i > n || f[i] == 1){
						cout << "-1";
						return;
					}
					f[i] = 1;
					i += d;
				}
				break;
			}
		}
	}
	cout << "1";




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