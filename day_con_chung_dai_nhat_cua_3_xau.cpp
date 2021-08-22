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

int x, y, z;
string s1, s2, s3;
ll ans;
ll L[200][200][200];

void xl (){
	cin >> x >> y >> z >> s1 >> s2 >> s3; x++; y++; z++; ans = 0;
// 	fori(i, 1, x) L[i][0][0] = 0;
// 	fori(i, 1, y) L[0][i][0] = 0;
// 	fori(i, 1, z) L[0][0][i] = 0;
	fori(i,1,x){
		fori(j,1,y){
			fori(k,1,z){
				if(s1[i - 1] == s2[j - 1] && s2[j - 1] == s3[k - 1]) L[i][j][k] = L[i - 1][j - 1][k - 1] + 1;
				else L[i][j][k] = max(L[i - 1][j][k], max(L[i][j - 1][k], L[i][j][k - 1]));
				ans = max(ans, L[i][j][k]);
			}
		}
	}
	cout << ans;
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