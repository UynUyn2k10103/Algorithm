#include<bits/stdc++.h>
#define fori(i,a,b) for(int i=a;i<b;i++)
#define forr(i,a,b) for(int i=a-1;i>=b;i--)
#define ll long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t,n,res;
    cin>>t;
    string s;
    int f[105][105];
    while(t--){
        cin>>n>>s;
        n++;
        res=0;
        fori(i,0,n)
            fori(j,0,n) f[i][j]=0;
        fori(i,1,n){
            fori(j,1,n){
                if(s[i-1]==s[j-1]&&i!=j) f[i][j]=f[i-1][j-1]+1;
                else f[i][j]=max(f[i-1][j-1],max(f[i-1][j],f[i][j-1]));
                res=max(res,f[i][j]);
            }
        }
        cout<<res<<"\n";
    }
}