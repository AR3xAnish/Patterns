/*

pattern 1
* * * * * 
* * * * * 
* * * * * 
* * * * * 
* * * * *

*/
 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,i,j;
    cin>>x;  //x=5
    for(i=0;i<x;i++){
        for(j=0;j<x;j++){
            cout<<"* ";
        };
        cout<<endl;
    };
    return 0;
}
