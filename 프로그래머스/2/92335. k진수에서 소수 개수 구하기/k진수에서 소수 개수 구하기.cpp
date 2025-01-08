#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

// Function to perform modular multiplication (a * b) % mod safely
ll mulmod(ll a, ll b, ll mod){
    __int128 res = (__int128(a) * b) % mod;
    return (ll)res;
}

// Function to perform modular exponentiation (base^exponent) % mod
ll powmod_func(ll base, ll exponent, ll mod){
    ll result = 1;
    base %= mod;
    while(exponent > 0){
        if(exponent & 1){
            result = mulmod(result, base, mod);
        }
        base = mulmod(base, base, mod);
        exponent >>= 1;
    }
    return result;
}

// Miller-Rabin primality test deterministic for n < 2^64
bool is_prime(ll n){
    if(n < 2) return false;
    // Bases for deterministic test for n < 2^64
    ll bases[] = {2,3,5,7,11,13,17,19,23,29,31,37};
    // Write n-1 as d * 2^s
    ll d = n-1;
    int s = 0;
    while(d % 2 == 0){
        d /= 2;
        s +=1;
    }
    for(auto a : bases){
        if(a >= n) continue;
        ll x = powmod_func(a, d, n);
        if(x == 1 || x == n-1) continue;
        bool cont_outer = false;
        for(int r = 1; r < s; r++){
            x = mulmod(x, x, n);
            if(x == n-1){
                cont_outer = true;
                break;
            }
        }
        if(cont_outer) continue;
        return false;
    }
    return true;
}

// Function to convert number n to base k and return as string
string to_base_k(ll n, int k){
    if(n == 0) return "0";
    string s = "";
    while(n > 0){
        s += to_string(n % k);
        n /= k;
    }
    reverse(s.begin(), s.end());
    return s;
}

int solution(int n, int k) {
    string s = to_base_k(n, k);
    // Split the string by '0's
    vector<string> parts;
    string current = "";
    for(char c : s){
        if(c == '0'){
            if(!current.empty()){
                parts.push_back(current);
                current = "";
            }
        }
        else{
            current += c;
        }
    }
    if(!current.empty()) parts.push_back(current);
    
    int count = 0;
    for(auto &part : parts){
        if(part.empty()) continue;
        // Ensure part does not contain '0's (already ensured by splitting)
        // Convert to decimal
        ll num = stoll(part);
        if(is_prime(num)){
            count++;
        }
    }
    return count;
}