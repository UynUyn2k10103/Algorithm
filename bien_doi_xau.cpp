// by Uyen B19DCCN709
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

vector < vector <int> > L(200);

void setIn(){
	fori(i, 0, L.size()) L[i].resize(200);
	fori(i, 0, L.size()) L[i][0] = i;
	fori(i, 0, L.size()) L[0][i] = i;
}

void xl (){
	string s1, s2;
	cin >> s1 >> s2;
	fori(i, 1, L.size()){
		fori(j, 1, L[i].size()) 
			if(s1[i - 1] == s2[j - 1]) L[i][j] = L[i - 1][j -1];
			else L[i][j] = min(L[i-1][j], min(L[i-1][j-1], L[i][j - 1])) + 1;
	}
	cout << L[s1.size()][s2.size()];
}

int main(){
	setIn();
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