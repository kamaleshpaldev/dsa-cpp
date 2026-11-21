#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0) {
            sum+=i;
            if(i!=n/i && i!=1) sum+=n/i;
        }

    }
    if(sum==n) cout<<"Perfect number";
    else cout<<"Not a Perfect number";  

    return 0;
}