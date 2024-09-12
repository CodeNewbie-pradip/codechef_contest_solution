/*
CodeChef Link               : https://www.codechef.com/problems/BALL_GAME
CodeChef Problem difficulty : 1736
CodeChef Related Topic      : Array, Pair, Sort
*/
//------------------------------Solution - in - C++ -----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define speed (ios_base::sync_with_stdio(false), cin.tie(NULL))
#define vec vector<long long>

int main(){
    speed;
    int T;
    cin>>T; 
    while(T--){
        int n;
        cin>>n;
        vec a(n);
        vec b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }

        vector<pair<ll, ll>>vp;
        for(ll i=0; i<n; i++){
            vp.push_back({a[i], b[i]});
        }
        
        sort(vp.begin(), vp.end());
        
        long double prev=1e9;
        int cnt=0;
        for(int i=n-1; i>=0; i--){
            long double curr=((long double)vp[i].first/vp[i].second);
            if(curr<=prev){
                cnt++;
                prev=curr;
            }
        }
        cout<<cnt<<endl;
    }
}
//--------------------------------------------------------------------------------------------------------------------