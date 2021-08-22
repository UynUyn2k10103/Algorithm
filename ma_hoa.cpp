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

int n;
vector <string> res1, res;

vector <int> vs;

void Try(int vt, string s){
    if(vt == n) {
        res.pb(s);
        return;
    }
    fori(i, '1', '1' + n){
        Try(vt + 1, s + char(i));
    }
}

void Try2(int vt, string s){
    if(vt == n) {
        res1.pb(s);
        return;
    }
    fori(i, 'A', 'A' + n){
        if(!vs[i]){
            vs[i] = 1;
            Try2(vt + 1, s + char(i));
            vs[i] = 0;
        }
    }
}

string tmp;

void xl (){
    cin >> n;
    vs.clear();
    vs.resize(500, 0);
    Try(0, "");
    Try2(0, "");
    //fori(i, 0, res.size()) cout << res[i] << " ";
    fori(i, 0, res1.size()){
        fori(j, 0, res.size()){
            cout << res1[i] << res[j] << "\n";
        }
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