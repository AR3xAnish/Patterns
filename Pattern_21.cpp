/*

Pattern 21
* * * * * 
*       * 
*       * 
*       * 
* * * * * 

*/
#include<bits/stdc++.h>
using namespace std;
void pattern21(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if( i == 0 || i==n-1 || j==0 || j==n-1 ){
                cout<<"* ";  
            }     
            else 
                cout<<"  ";
        };
        cout<<endl;
    };
}
int main(){
    int x;
    cin>>x;
    pattern21(x);
    return 0;
}