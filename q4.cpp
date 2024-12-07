#include <bits/stdc++.h>
using namespace std;

/*
[n=5]
     @
    @@@
   @@@@@
  @@@@@@@
  *     *
 **     **
***@@@@@***
 **     **
  *     *
*/

int main() {
    int n;
    cin>>n ;
    
    int m=n/2;

    for(int i=0; i<m+2; i++){
        for (int j=0; j<n-i; j++){
            cout<<" ";
        }
        for (int j=0; j<2*i + 1; j++){
            cout<<"@"; 
        }
        cout<<endl;
    }
    
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m+1; j++){
            if (j>=m-i && j>=i-m){
                cout<<"*";
            }
            else
            cout<<" ";
        }
        for (int j=0; j<n; j++){
            if (i==m)
                cout<<"@";
            else
                cout<<" ";
        }
        for (int j=0; j<m+1; j++){
            if (j>=m-i && j>=i-m)
                cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
