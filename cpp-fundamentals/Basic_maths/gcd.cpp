// eclidean algorithm


#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    while(a>0&&b>0){
        if(a>b) a%=b;
        else b%=a;
    }
    cout<<"gcd is "<<(a==0?b:a);

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int a,b,c;
//     cin>>a>>b;

//     while(a>0&&b>0){
//         c=min(a,b);
//         a=max(a,b)%c;
//         b=c;
//     }
//     cout<<"gcd is "<<max(a,b);

//     return 0;
// }



// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n1,n2,gcd=1;
//     cin>>n1>>n2;
//     for(int i=1;i<=min(n1,n2);i++){
//         if(n1%i==0&&n2%i==0) gcd=i;
//     }
//     cout<<"gcd is "<<gcd;
//     return 0;
// }




// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n1,n2,g=1;
//     vector<int> v1;
//     vector<int> v2;
//     cin>>n1>>n2;
//     for(int i=1;i*i<=n1;i++){
//         if(n1%i==0){
//             v1.push_back(i);
//             if(n1/i!=i) v1.push_back(n1/i);
//         } 
//     }
//     for(int i=1;i*i<=n2;i++){
//         if(n2%i==0){
//             v2.push_back(i);
//             if(n2/i!=i) v2.push_back(n2/i);
//         } 
//     }
//     for(auto it1:v1){
//         for(auto it2:v2){
//             if(it1==it2) g = max(g, it1);
//         }
//     }
//     cout<<"gcd is "<<g;

//     return 0;
// }