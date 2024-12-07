#include<bits/stdc++.h>
using namespace std;

/*
[n=6]
@
@
@
@******
@     ******
@          ******               @
@               ******          @
                     ******     @
                          ******@
                                @
                                @
                                @
*/

int main(){
    int n;
    cin>>n;

    int x=0;

    for(int i=0;i<2*n;i++){
        bool flag=false;
        if(i<n+1){
            cout<<"@";
        }
        else{
            cout<<" ";
        }
        for(int j=0;j<n*(n-1)+1;j++){
            if(i>=n/2 and i<2*n - (n/2)){
                if(j<(n-1)*x or j>(n-1)*x+n-1){
                    cout<<" ";
                }
                else{
                    cout<<"*";
                }
                flag=true;
            }
            else cout<<" ";
        }
        if(i>=n-1){
            cout<<"@";
        }
        else{
            cout<<" ";
        }

        if(flag) x++;
        cout<<endl;
    }
}