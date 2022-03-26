#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vvi;
typedef pair<ll, ll> pii;
typedef vector<pii> vpii;
#define fast                              \
    {                                     \
        ios_base::sync_with_stdio(false); \
        cin.tie(NULL);                    \
        cout.tie(NULL);                   \
    }

ll searchForinVector(ll element_to_search_for, vector<ll>& vec)
{
    sort(vec.begin(), vec.end());
    ll end = vec.size();
    ll start = 0;
    int flag = 0;
    while (end > start){
        ll mid = (start+end)/2;
        if (vec[mid] == element_to_search_for){
            return mid;
            flag = 1;
        }
        else if (vec[mid] > element_to_search_for){
            end = mid - 1;
        }
        else if (vec[mid] < element_to_search_for){
            start = mid + 1;
        }
    }
    if (flag == 0){
        return -1;
    }
    return 0;
}

ll searchForinArray(ll element_to_search_for, ll *vec, ll end)
{   
    sort(vec, (vec+end));
    ll start = 0;
    int flag = 0;
    while (end > start){
        ll mid = (start+end)/2;
        if (vec[mid] == element_to_search_for){
            return mid;
            flag = 1;
        }
        else if (vec[mid] > element_to_search_for){
            end = mid - 1;
        }
        else if (vec[mid] < element_to_search_for){
            start = mid + 1;
        }
    }
    if (flag == 0){
        return -1;
    }
    return 0;
}

int main(){
    fast;
    return 0;
}
