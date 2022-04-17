#include <bits/stdc++.h>
#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define vpii vector<pair<int,int>>
#define vpll vector<pair<long long,long long>>
#define si set<int>
#define mii map<int,int>
#define mll map<long long,long long>
#define eb emplace_back
#define mp make_pair
#define fi first
#define se second
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
using namespace std;

int main(){
    int sieve[100000];
    for (ll i = 0; i < 100000; i++){
        sieve[i] = 0;
    }
    ll i = 2;
    while(i<100){
        ll k = i*2;
        while(k < 100 and sieve[i] != 1){
            cout << k << " " << i << endl;
            sieve[k] = 1;
            k += i;
        }
        i++;
    }
}
