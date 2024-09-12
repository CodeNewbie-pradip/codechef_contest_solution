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
#include<iostream>
using namespace std;

int main(){
    int A1, A2, B1, B2, C1, C2;
    cin>>A1>>A2>>B1>>B2>>C1>>C2;
    cout<<max(A1, A2)+max(B1, B2)+max(C1, C2)<<endl;
    return 0;
}
//-----------------------------------------------------------------------------------------------------------
//Approach 2: Array and Loop
//T.C       : O(n)
//S.C       : O(n)
//-------------------------------------------------------------------------------------------------------------
#include<iostream>
using namespace std;

int main(){
    int arr[6];
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    int result=0;
    for(int i=0; i<6; i+=2){
        result+=arr[i]+arr[i+1];
    }
    cout<<result<<endl;
}

//-------------------------------------------------------------------------------------------------------------


