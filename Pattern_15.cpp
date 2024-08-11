/*

Pattern 15
A B C D E 
A B C D 
A B C 
A B 
A 

*/
#include<bits/stdc++.h>
using namespace std;
void pattern14(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<='A'+(n-i);ch++){
            cout<<ch<<" ";
        };
        cout<<endl;
    };
}
int main(){
    int x;
    cin>>x;
    pattern14(x);
}