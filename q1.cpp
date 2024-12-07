#include<bits/stdc++.h>
using namespace std;

/*
[n=7]
   @@@@@@@
    @@@@@
     @@@
      @
*******
*     *
*     *
*     *
*     *
*     *
*     *
*/

int main(){
    int n;
    cin>>n;

    if(n<=1 or n%2==0) return 0;

    int m = (n/2) + 1;
    int sp = n/2;

    for(int i=0;i<m;i++){
        for(int j=0;j<sp;j++){
            cout<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=0;j<n-(2*i);j++){
            cout<<"@";
        }
        cout<<endl;
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 or j==0 or j==n-1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}