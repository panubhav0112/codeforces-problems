#include <bits/stdc++.h>
#define ll long long int
#define md 1000000007
#define pb push_back
#define FOR(i,n) for(ll i=0;i<n;i++)
using namespace std;

typedef pair<ll, ll> pi;
vector<int> adj[100002];

using vec = vector<ll> ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int t;
    cin>>t;
    FOR(u,t)
    {
        int n;
        cin>>n;
        string s1,s2;
        cin>>s1>>s2;
        int ans=0;
        FOR(i,n){
            if((s1[i]=='0' && s2[i]=='1') || (s1[i]=='1' && s2[i]=='0')){
                ans+=2;
            }
            else if(s1[i]=='1' && s2[i]=='1'){
                int j=i+1;
                while(j<n){
                    if(s1[j]=='0' || s2[j]=='0'){
                        ans+=2;
                        break;
                    }
                    j++;
                }
                i=j;
                // cout<<j<<"\n";
            }
            else{
                // cout<<i<<"\n";
                if(i==n-1){
                    ans++;
                }
                else{
                    if(s1[i+1]=='1' && s2[i+1]=='1'){
                        ans+=2;
                        i++;
                    }
                    else{
                        ans++;
                    }
                }
            }
        }
        cout<<ans<<"\n";
    }
    
}