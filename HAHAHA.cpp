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

void ok(string s){
    fori(i, 1, s.size()){
        if(s[i] == 'H' && s[i - 1] == 'H') return;
    }
    s = s + 'A';
    cout << s << "\n";
}

void Try(int vt, string s){
    fori(i, 0, 2){
        if(vt == n) {
            ok(s);
            return;
        }
        else {
            if(i == 0) Try(vt + 1, s + "A");
            else Try(vt + 1, s + "H");
        }
    }
    
}

void xl(){
    cin >> n;
    n -= 2;
    if(n == 0){
        cout << "HA";
        return;
    }
    Try(0, "H");
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