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

int n;
vector <vector <int> > ans;

void Try(int sum, vector < int > v){
	if(sum < 0) return;
	if(sum == 0) {
		ans.pb(v);
		return;
	}
	
	forr(i, ((v.size())? v[v.size() - 1] : sum) + 1, 1) {
		v.pb(i);
		Try(sum - i, v);
		v.pop_back();
	}

}
void xl (){
	cin >> n;
	ans.clear();
	vector <int> res;
	Try(n, res);
	cout << ans.size() << "\n";
	fori(i, 0, ans.size()){
		cout << "(" << ans[i][0];
		fori (j, 1, ans[i].size()) cout << " " << ans[i][j];
		cout << ")";
	}
}

int main(){
	fastIO();
	int T; 
	//T = 1;
	cin >> T;
	cin.ignore();
	while (T -- ){
		xl();
		cout << "\n";
	}
}