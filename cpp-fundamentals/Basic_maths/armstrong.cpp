#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt,sum=0,og;
    cin>>n;
    og=n;
    cnt=(n==0)? 1 : (int)(log10(n)+1);
    while(n>0){
        sum+= pow((n%10),cnt);
        n/=10;
    }
    if(sum==og) cout<<og<<" is a armstrong number.";
    else cout<<og<<" is not a armstrong number.";
    
    return 0;
}