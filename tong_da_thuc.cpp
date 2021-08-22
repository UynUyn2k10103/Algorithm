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
const ll oo = 1e5 + 1;

vector <int> bt;
string s;
int tmp, heso, mu, maxx, minn;

void cd(){
    tmp = 0;
    getline(cin, s);
    fori(i, 0, s.size()){
        if(s[i] >= '0' && s[i] <= '9'){
            tmp = tmp * 10 + int(s[i] - '0');
            if(i == s.size() - 1) bt[tmp] += heso;
        }
        else {
            if(s[i] == '*') {
                heso = tmp;
                tmp = 0;
            }
            if(s[i] == '+') {
                mu = tmp;
                maxx = max(mu, maxx);
                tmp = 0;
                bt[mu] += heso;
            }
        }
        
    }

}

void xl (){
    bt.clear();
    bt.resize(oo, 0); maxx = 0;
    cd();
    cd();
    fori(i, 0, maxx + 1){
        if(bt[i]) {
            minn = i;
            break;
        }
    }
    forr(i, maxx + 1, minn + 1){
        if(bt[i]) cout << bt[i] << "*x^" << i << " + ";
    }
    cout << bt[minn] << "*x^" << minn;
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