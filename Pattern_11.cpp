/*

Pattern 11
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 

*/
#include<bits/stdc++.h>
using namespace std;
void pattern11(int n){
    int i,j;
    int start=1;
    for(i=1;i<=n;i++){
        if(i%2 != 0)
            start=1;
        else
            start=0;
        for(j=1;j<=i;j++){
            cout<<start<<" ";
            start=1-start;
        };
        cout<<endl;
    };
}
int main(){
    int x;
    cin>>x;
    pattern11(x);
}