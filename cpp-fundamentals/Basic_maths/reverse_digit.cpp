#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,rev=0;
    cin>>n;
    while(n>0){
        rev=rev*10+n%10;
        n=n/10;
    }
    cout<<rev;


    return 0;
}
// leetcode

// class Solution {
// public:
//     int reverse(int x) {
//         int rev = 0;
//         while (x != 0) { // Handles both positive and negative numbers
//             int digit = x % 10;
            
//             // Check for 32-bit signed integer overflow BEFORE multiplying by 10
//             if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
//             if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;
            
//             rev = rev * 10 + digit;
//             x /= 10;
//         }
//         return rev;
//     }
// };