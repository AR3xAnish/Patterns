/*

Pattern 10
*
**
***
****
*****
****
***
**
*   
    
*/
#include<bits/stdc++.h>
using namespace std;
void pattern10(int n){
    int i,j;

    for(i=1;i<=(2*n-1);i++){
        int star=i;
        if(i>n){
            star=(2*n-i);
        };
        for(j=1;j<=star;j++){
            cout<<"*";
        };
        cout<<endl;
    };
}
int main(){
    int x;
    cin>>x;
    pattern10(x);
}