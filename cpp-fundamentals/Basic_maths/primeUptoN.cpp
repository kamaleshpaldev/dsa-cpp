#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    vector<bool>prime(n+1,true);
    prime[0]=false;
    prime[1]=false;

    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]==true) cnt++;
    }
    cout<<cnt;
    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n,prime=0;
//     cin>>n;
//     for(int i=2;i<n;i++){
//         int cnt=0;
//         for(int j=1;j*j<=i;j++){
//             if(i%j==0){
//                 cnt++;
//                 if(i/j!=j) cnt++;
//             }
//             if(cnt>2) break;
//         }

//         if(cnt==2) prime++;
//     }
//     cout<<prime;
//     return 0;
// }