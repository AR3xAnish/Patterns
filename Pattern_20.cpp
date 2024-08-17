/*

Pattern 20
*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/
#include<bits/stdc++.h>
using namespace std;
void pattern19(int n){
    //!st half
    for(int i=1;i<=n;i++){
        //star
        for(int j=0;j<i;j++){
            cout<<"*";
        };
        //space
        for(int j=0;j<2*(n-i);j++){
            cout<<" ";
        };
        //star
        for(int j=0;j<i;j++){
            cout<<"*";
        };
        cout<<endl;
    };
    //2nd half
    for(int i=1;i<n;i++){
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        };
        //space
        for(int j=0;j<i*2;j++){
            cout<<" ";
        };
        //star
        for(int j=0;j<n-i;j++){
            cout<<"*";
        };
        cout<<endl;
    };
}
int main(){
    int x;
    cin>>x;
    pattern19(x);
}