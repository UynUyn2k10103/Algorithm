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

string s, x, ans;
stack <string> st;
stack <int> so;
int tmp;
bool ok;

void xl (){
    cin >> s;
    fori(i, 0, s.size()){
        if(s[i] <= '9' && s[i] >= '0'){
            tmp = 0;
            while(s[i] <= '9' && s[i] >= '0' && i < s.size()){
                tmp = tmp * 10 + int(s[i ++] - '0');
            }
            i --;
            so.push(tmp);
            continue;
        }
        x = "";
        if(s[i] == ']'){
            ans = "";
            while (!st.empty() && st.top() != "["){
                x = st.top() + x;
                st.pop();
            }
            if(!st.empty() && st.top() == "[") st.pop();
            if(so.empty()) continue;
            tmp = so.top(); so.pop();
            fori(i, 0, tmp) ans = ans + x;
            st.push(ans);
        }
        else {
            x = "";
            x = x + s[i];
            st.push(x);
            if(s[i] == '[' && (s[i - 1] < '0' || s[i - 1] > '9' || i == 0)) so.push(1);
        }
    }
    ans = "";
    while (!st.empty()){
        ans = st.top() + ans;
        st.pop();
    }
    cout << ans;
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