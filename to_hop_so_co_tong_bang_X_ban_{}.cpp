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

int n, x;
bool ok = 1;
int a[1000];
vector <vector <int> > ans;

void in(vector <int> res){
	cout << "[";
	fori(i, 0, res.size() - 1) cout << a[res[i]] << " ";
	cout << a[res[res.size() - 1]] << "]";
}

void Try(int sum, vector < int > v){
	if(sum < 0) return;
	if(sum == 0) {
		ok = 0;
		ans.pb(v);
		return;
	}
	
	fori(i, ((v.size())? v.back() : 0), n) {
		v.pb(i);
		Try(sum - a[i], v);
		v.pop_back();
	}

}
void xl (){
	cin >> n >> x; ok = 1; ans.clear();
	fori(i, 0, n){
		cin >> a[i];
	}

	vector <int> res;
	res.clear();

	sort(a, a + n);
	Try(x, res);
	if(ok) {
        cout << "-1";
        return;
    }
    cout << ans.size() << " ";
    fori(i, 0, ans.size()) {
        cout << " {" << a[ans[i][0]];
        fori(j, 1, ans[i].size()) cout << " " << a[ans[i][j]];
        cout << "}";
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