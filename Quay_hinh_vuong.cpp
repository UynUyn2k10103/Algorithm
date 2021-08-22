#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
int dx[]={0, 1, 5, 2, 4, 6, 3};
int dr[]={0, 4, 1, 3, 5, 2, 6 };

map <string, int> dd;

string quay_trai(string s){
    s = '0' + s;
    string res = "";
    fori(i,1,7) res += s[dx[i]];
    return res;
}

string quay_phai(string s){
    s = '0' + s;
    string res = "";
    fori(i,1,7) res += s[dr[i]];
    return res;
}

void BFS(string a, string b) {
    queue <string> Q;
    Q.push(a);
    dd[a]=1;
    while(!Q.empty() ){
        string s = Q.front();
        Q.pop();
        if (s == b) {
            cout << dd[s] - 1;
            return;
        }
        string a1 = quay_trai(s);
        if(dd[a1] == 0){
            Q.push(a1);
            dd[a1] = dd[s] + 1;
        }
        string a2 = quay_phai(s);
        if(dd[a2] == 0){
            Q.push(a2);
            dd[a2] = dd[s] +1;
        }
    }
}
int main(){
    char a[7];
    string s="";
    string dich="";
    fori(i,1,7){
        cin >> a[i];
        s += a[i];
    }
    //cerr<<quay_trai(s)<<" "<<quay_phai(s);
    fori(i,1,7) {
        cin >> a[i];
        dich += a[i];
    }
    cerr << s << " " << dich << endl;
    BFS(s , dich);
}
