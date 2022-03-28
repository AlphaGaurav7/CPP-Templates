#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int M = 1e9+7;

// returns (a ^ b) % m

// int binExpIter(int a, int b, int m) {
//     int res = 1;
//     while (b) {
//         if (b & 1) res = (res * 1LL * a) % m;
//         // Order of operation is from left to right
//         // position of 1LL matters
//         a = (a * 1LL * a) % m;
//         b >>= 1;
//     }
//     return res;
// }


// minified version
int binExpIter(int a,int b,int m){int res=1;while(b){if(b&1)res=(res*1LL*a)%m;a=(a*1LL*a)%m;b>>=1;}return res;}

int binExpRecur(int a, int b, int m) {
    if (b == 0) return 1;
    int res = binExpRecur(a, b / 2, m);
    if (b & 1) {
        // precedence of * is > than %
        return (a * ((res * 1LL * res) % m)) % m;
    } else {
        return (res * 1LL * res) % m;
    }
}

int main () {
    // can't perform (999999999**999999999)%(1000000007) in python
    cout << binExpIter(999999999, 999999999, M) << endl;
    cout << binExpRecur(999999999, 999999999, M) << endl;
}

/*

int --> 1e9 (2,147,483,647)
ll --> 1e19 (18,446,744,073,709,551,615)

Divide and Conquer

Method #1: Iterative (better) --> complexity = log(b)
3^11 = 3^8 * 3^2 * 3^1   (11 =  1011)
2*16 = 2^16              (16 = 10000)


Method #2: Recursion --> complexity = log(b)
3^11 = 3 * 3^5 * 3*5
3*5  = 3 * 3^2 * 3^2
3^2  =     3^1 * 3^1
3^1  = 3 * 3^0 * 3^0
3^0  = 1

2^16 = 2^8 * 2*8
2^8  = 2^4 * 2^4
2^4  = 2^2 * 2^2
2^2  = 2^1 * 2^1
2^1  = 2 * 2^0 * 2^0
2^0  = 1

*/