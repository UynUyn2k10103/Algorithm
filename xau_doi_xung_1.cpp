// by Uyen B19DCCN709
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
ll pre;
ll L[2000][2000];

void xl (){
    cin >> s; pre = 0;
    tmp = s;
    reverse(tmp.begin(), tmp.end());
    fori(i, 1, s.size() + 1){
        fori(j, 1, tmp.size() + 1){
            if(s[i - 1] == tmp[j - 1] ) L[i][j] = L[i - 1][j - 1] + 1;
            else L[i][j] = max(L[i - 1][j], max(L[i][j - 1], L[i - 1][j - 1]));
            pre = max(pre, L[i][j]);
        }
    }
    cout << s.size() - pre;
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