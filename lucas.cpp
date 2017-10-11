ll quick_mod(ll a, ll b){
    ll ans = 1;
    a %= MOD;
    while(b){
        if(b & 1){
            ans = ans * a % MOD;
            b--;
        }
        b >>= 1;
        a = a*a%MOD;
    }
    return ans;
}
ll C(ll n, ll m){
    if(m > n)return 0;
    ll ans = 1;
    for(int i=1;i<=m;i++){
        ll a = (n+i-m)%MOD;
        ll b = i%MOD;
        ans = ans*(a*quick_mod(b,MOD-2)%MOD)%MOD;
    }
    return ans;
}
ll Lucas(ll n, ll m){
    if(m == 0) return 1;
    return C(n%MOD,m%MOD)*Lucas(n/MOD,m/MOD)%MOD;
}
