/*

Pattern 9
    *    
   ***   
  *****  
 ******* 
*********
*********
 ******* 
  *****  
   ***   
    *    
    
*/
#include<bits/stdc++.h>
using namespace std;
void pattern9(int n){
    //combination of 2 patterns
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
    //outer loop
    for(i=1;i<=n;i++){
        //initial space
        for(j=1;j<i;j++){
            cout<<" ";
        };
        //stars
        for(j=1;j<=2*n-(2*i-1);j++){
            cout<<"*";
        };
        //final space
        for(j=1;j<i;j++){
            cout<<" ";
        };
        cout<<endl;
    };
}
int main(){
    int x;
    cin>>x;
    pattern9(x);
    return 0;
}