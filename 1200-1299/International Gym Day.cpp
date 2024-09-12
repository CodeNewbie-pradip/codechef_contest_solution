/*
CodeChef Link               : https://www.codechef.com/problems/WEIGHTLIFT 
CodeChef Problem difficulty : 270
CodeChef Related Topic      : Array
*/

//------------------------------Solution - in - C++ -----------------------------------------------------------

//Approach 1: Simple Max Selection
//T.C       : O(1)
//S.C       : O(1)
//-------------------------------------------------------------------------------------------------------------
#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'
#define speed (ios_base::sync_with_stdio(false), cin.tie(NULL));

int main(){
    speed;
    int t;
    cin>>t;
    while (t--)
    {
        int d, x, y;
        cin>>d>>x>>y;
        if(x<=y){
            cout<<0<<endl;
            continue;
        }

        int cnt=0;
        while(true){
            y--;
            cnt++;
            //if possible
            if(x*(100-cnt*d)<=y*100){
                cout<<cnt<<endl;
                break;
            }

            //if impossible
            if(y==0 && x*(100-cnt*d)>y*100){
                cout<<-1<<endl;
                break;
            }
        }
    }
    return 0;
}

//-------------------------------------------------------------------------------------------------------------