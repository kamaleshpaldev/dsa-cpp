#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,mx=0;
    cin>>n;
    n=abs(n);
    while(n!=0){
        if(mx<n%10) mx=n%10;
        n/=10;
    }
    cout<<mx;


    return 0;
}