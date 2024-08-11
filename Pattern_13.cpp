/*

Pattern 13
1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15 

*/
#include<bits/stdc++.h>
using namespace std;
void pattern13(int n){
    int i,j;
    int count=1;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<count<<" ";
            count+=1;
        };
        cout<<endl;
    };
}
int main(){
    int x;
    cin>>x;
    pattern13(x);
}