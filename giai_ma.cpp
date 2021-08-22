// By Uyen B19DCCN709
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

string s;
vector <ll> L;

void xl (){
    cin >> s;
    L.clear();
    if(s[0] == '0') {
        cout << "0";
        return;
    }
    L.resize(s.size() + 1);
    L[0] = L[1] = 1;
    fori(i, 2, s.size() + 1){
        if(s[i - 1] > '0') L[i] = L[i - 1];
        if(s[i - 2] == '1' || s[i - 2] == '2' && s[i - 1] < '7') L[i] += L[i - 2];
    }
    cout << L[s.size()];
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