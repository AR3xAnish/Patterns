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
void pattern1(int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"* ";
        };
        cout<<endl;
    };

}
int main(){
    int x,i,j;
    cin>>x;//5
    pattern1(x);
    return 0;
}
