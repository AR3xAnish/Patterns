/*

Pattern 12
1        1
22      22
333    333
4444  4444
5555555555

*/
#include<bits/stdc++.h>
using namespace std;
void pattern12(int n){
    int i,j;
    int space=2*(n-1);
    for(i=1;i<=n;i++){
        //numbers
        for(j=1;j<=i;j++){
            cout<<i;
        }
        //space
        for(j=1;j<=space;j++){
            cout<<" ";
        }
        //numbers
        for(j=1;j<=i;j++){
            cout<<i;
        }
        cout<<endl;
        space=space-2;
    };
}
int main(){
    int x;
    cin>>x;
    pattern12(x);
}