/*

Pattern 2
* 
* * 
* * * 
* * * * 
* * * * *

*/

#include<bits/stdc++.h>
using namespace std;

void pattern2(int x){
    int i,j;
    for(i=1;i<=x;i++){
        for(j=1;j<=i;j++){
            cout<<"* ";
        };
        cout<<endl;
    };

}

int main(){
    int x;
    cin>>x;
    pattern2(x);
}