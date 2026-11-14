#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=1;i<=2*n-1;i++){
        int star = i;
        int space = 2*(n-i);
        if(i>n){
            star = 2*n-i;
            space=2*(i-n);
        }
        for(int j=1;j<=star;j++){
            cout<<"*";
        }
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=star;j++){
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