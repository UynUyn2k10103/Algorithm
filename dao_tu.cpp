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

string s, tmp;
vector <string> res;

void xl (){
    getline(cin, s);
    res.clear();
    fori(i, 0, s.size()){
        tmp = "";
        while (s[i] != ' ' && i < s.size()){
            tmp = tmp + s[i];
            i ++;
        }
        if(tmp != "") res.pb(tmp);
        
    }
    forr(i, res.size(), 0) cout << res[i] << " ";
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