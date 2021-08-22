#include <bits/stdc++.h>
#define fastIO() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define ull unsigned long long
#define fori(i,a,b) for (ll i = a; i < b; i++)
#define forr(i,a,b) for (ll i = a - 1; i >= b; i--)
#define pb push_back
#define mp make_pair
#define F first
#define S second
using namespace std;

const ll mod = 1e9 + 7;
const ll oo = 1e6 + 5;

vector <vector <bool> > G;
int n, tmp;
bool x;
string s;

void xl (){
	cin >> n; n ++; G.clear();
	G.resize(n, vector <bool> (n, 0));
	cin.ignore();
	fori(i, 1, n){
		getline (cin, s);
		fori (j, 0, s.size()){
			tmp = 0;
			while (j < s.size() && s[j] != ' '){
				tmp = tmp * 10 + int(s[j ++] - '0');
			}
			if(tmp) G[i][tmp] = 1;
		}
	}
	fori(i, 1, n){
		fori(j, 1, n){
			cout << G[i][j] << " ";
		}
		cout << "\n";
	}
	
}

int main(){
	fastIO();
	int T; 
	T = 1;
	//cin >> T;
	//cin.ignore();
	while (T -- ){
		xl();
		//cout << "\n";
	}
}