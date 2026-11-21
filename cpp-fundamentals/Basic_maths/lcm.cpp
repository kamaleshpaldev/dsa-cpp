
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    int mul=a*b;
    while(a>0&&b>0){
        if(a>b) a%=b;
        else b%=a;
    }
    cout<<"lcm is "<<mul/(a==0?b:a);

    return 0;
}