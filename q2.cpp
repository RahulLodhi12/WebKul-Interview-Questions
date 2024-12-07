#include<bits/stdc++.h>
using namespace std;

/*
[n=9]
*
**
***
****      *
************
****      *
***
**
*
*/

int main(){
    int n;
    cin>>n;

    int m=n/2;
    for(int i=0;i<n;i++){
        if(i<m){
            for(int j=0;j<=i;j++){
                cout<<"*";
            }
            if(i==m-1){
                cout<<"      *";
            }
        }
        else if(i==m){
            for(int j=0;j<n;j++){
                cout<<"*";
            }
            cout<<"***";
        }
        else if(i>m){
            for(int j=n-i;j>0;j--){
                cout<<"*";
            }
            if(i==m+1){
                cout<<"      *";
            }
        }
        cout<<endl;
    }
}