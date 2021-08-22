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
int res = 0;

void mid(int index){
    int dem = 1;
    int l = index - 1;
    int r = index + 1;
    while(l >= 0 && r < s.size()){
        if(s[l] != s[r]) break;
        dem += 2;
        l--; r ++;
    }
    res = max(res, dem);
}

void mid2(int index){
    int dem = 0;
    int l = index;
    int r = index + 1;
    while(l >= 0 && r < s.size()){
        if(s[l] != s[r]) break;
        dem += 2;
        l--; r ++;
    }
    res = max(res, dem);
}

void xl (){
    cin >> s; res = 0;
    fori(i, 0, s.size()) {
        mid(i);
        mid2(i);
    }
    cout << res;

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