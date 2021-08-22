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

struct cmp {
	bool operator () (pair <int, int> a, pair <int, int> b){
		return a.S < b.S;
	}
};


int n, jobld, deadline, profit;
priority_queue <pair<int, int>, vector<pair<int, int> >, cmp> q;
vector <bool> vs;
int res, dem;

void xl (){
	cin >> n; dem = 0; res = 0;
	vs.clear();
	vs.resize(1005, 0);
	fori(i, 0, n){
		cin >> jobld >> deadline >> profit;
		q.push(mp(deadline, profit));
	}
	
	while (!q.empty()){
		forr(i, q.top().F + 1, 1) if(!vs[i]){
			res += q.top().S;
			dem ++;
			vs[i] = 1;
			break;
		}
		q.pop();
	}
	cout << dem << " " << res;
	

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