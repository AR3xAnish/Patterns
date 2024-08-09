/*

Pattern 5
* * * * * 
* * * * 
* * * 
* * 
* 

*/
#include<bits/stdc++.h>
using namespace std;
void pattern5(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=i;j--){
            cout<<"* ";
        };
        cout<<endl;
    };
}
int main(){
    int x;
    cin>>x;
    pattern5(x);
    return 0;
}