/*

Pattern 6
1 2 3 4 5 
1 2 3 4 
1 2 3 
1 2 
1 

*/

#include<bits/stdc++.h>
using namespace std;
void pattern6(int n){
    int i,j;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i+1;j++){
            cout<<j<<" ";
        };
        cout<<endl;
    };
}
int main(){
    int x;
    cin>>x;
    pattern6(x);
    return 0;
}