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

vector <string> res;
string s;

void Try(int vt, string tmp){
    if(tmp != "") res.pb(tmp);
    if(vt == s.size()) return;
    fori(i, vt, s.size()){
        Try(i + 1, tmp + s[i]);
    }
}

int n;

void xl (){
	cin >> n;
    cin >> s; res.clear();
    Try(0, "");
    sort(res.begin(), res.end());
    fori(i, 0, res.size()) cout << res[i] << " ";
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