#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=1;i<=n;i++){
        if(i==1||i==n){
            for(int j=1;j<=n;j++){
            cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int j=1;j<=n-2;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    print1(n);
    return 0;

}