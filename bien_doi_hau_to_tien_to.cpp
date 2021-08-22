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
deque <string> st;

void xl (){
    cin >> s;
    fori(i, 0, s.size()){
        tmp = "";
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '^'){
            if(!st.empty()){
                tmp = tmp + st.back();
                st.pop_back();
            }
            if(!st.empty()){
                tmp = st.back() + tmp;
                st.pop_back();
            }
        }
        //cout << tmp << " ";
        tmp = s[i] + tmp;
        st.push_back(tmp);
    }
    while (!st.empty())
    {
        cout << st.front();
        st.pop_front();
    }
    
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