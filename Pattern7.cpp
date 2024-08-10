/*

Pattern 7
    *    
   ***   
  *****  
 ******* 
*********

*/
#include<bits/stdc++.h>
using namespace std;
void pattern7(int n){
    int i,j;
    //outer loop
    for(i=1;i<=n;i++){
        //initial space
        for(j=1;j<=n-i;j++){
            cout<<" ";
        };
        //stars
        for(j=1;j<=2*i-1;j++){
            cout<<"*";
        };
        //final space
        for(j=1;j<=n-i;j++){
            cout<<" ";
        };
        cout<<endl;
    };
}
int main(){
    int x;
    cin>>x;
    pattern7(x);
    return 0;
}