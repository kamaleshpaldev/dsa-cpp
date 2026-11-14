#include <bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=1;i<=2*n;i++){
        int star = n-i+1;
        int space = 2*(i-1);
        if(i>n){
            star = i-n;
            space=2*(2*n-i);
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