#include<bits/stdc++.h>
using namespace std;
void pattern14(int n){
    for(int i=0;i<n;i++){
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        };
        //Alphabets
        //first half symmetry
        for(char ch='A';ch<='A'+i;ch++){
            cout<<ch;
        };
        //second half symmetry
        char ch='A'+i;
        for(int j=0;j<i;j++){
            cout<<ch;
            ch+=1;
        }
        //space
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        };
        cout<<endl;
    };
}
int main(){
    int x;
    cin>>x;
    pattern14(x);
}