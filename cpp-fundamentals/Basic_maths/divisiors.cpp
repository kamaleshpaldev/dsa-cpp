#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> v;
    cin>>n;
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            v.push_back(i);
            if(n/i!=i) v.push_back(n/i);

        } 


    }
    sort(v.begin(),v.end()); 
    for(auto it:v){
        cout<<it<<" ";
    }

    return 0;
}






// O(N)


// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int n;
//     vector<int> v;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         if(n%i==0) v.push_back(i);


//     }
//     for(auto it:v){
//         cout<<it<<" ";
//     }

//     return 0;
// }