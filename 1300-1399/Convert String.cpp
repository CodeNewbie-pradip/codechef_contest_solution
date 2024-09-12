/*
CodeChef Link               : https://www.codechef.com/problems/SAMESTR 
CodeChef Problem difficulty : 1361
CodeChef Related Topic      : String
*/

//------------------------------Solution - in - C++ -----------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"
#define speed (ios_base::sync_with_stdio(false), cin.tie(NULL));

int main(){
    speed;
    int T;
    cin>>T;
    while(T--){
        int n, ones=0, zero=0;
        string s;
        cin>>n;
        cin>>s;

        for(auto c:s){
            if(c=='1'){
                ones++;
            }else{
                zero++;
            }
        }
        int flip=0;
        for(int k=1; k<=n; k++){
            if((k>=zero && (k-zero)%2==0) || (k>=ones && (k-ones)%2==0)){
                flip++;
            }
        }
        cout<<flip<<endl;
    }
    return 0;
}

//-------------------------------------------------------------------------------------------------------------
