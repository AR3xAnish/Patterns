/*

Pattern 14
A 
A B 
A B C 
A B C D 
A B C D E 

*/
#include<bits/stdc++.h>
using namespace std;
void pattern14(int n){
    for(int i=1;i<=n;i++){
        for(char ch='A';ch<'A'+i;ch++){
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