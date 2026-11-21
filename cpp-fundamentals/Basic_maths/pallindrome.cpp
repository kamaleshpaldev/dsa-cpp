#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,rev=0,og;
    cin>>n;
    og=n;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<rev;
    if(og==rev) cout<<og<<" is a pallindrome number.";
    else cout<<og<<" is not a pallindrome number.";


    return 0;
}