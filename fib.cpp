#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

const ll M = 1e9+7;

#define vpll vector<pair<ll,ll>>
#define pll pair<ll,ll>

vector< pair<ll,ll> > base;
vpll mul(vpll a, vpll b){

    vpll c;
    ll a1 = (a[0].first*b[0].first + a[0].second*b[1].first )%M;
    ll a2 = (a[0].first*b[0].second + a[0].second*b[1].second )%M;
    ll b1 = (a[1].first*b[0].first + a[1].second*b[1].first) % M;
    ll b2 = (a[1].first*b[0].second + a[1].second*b[1].second) % M;
    pll x = { a1 , a2 };
    pll y = { b1 , b2 };

    c.push_back(x);
    c.push_back(y);

    return c;
}

vpll power(vpll a, ll b){

	if(b==1) return base;

	vpll r = power(a,b/2);

	r = mul(r,r);

	if(b%2) r = mul(r,a);

	return r;

}
/*
[f(n)  ] _> [1 1] MULTIPLIED BY [F(n-1)]
[f(n-1)]  > [1 0]               [F(n-2)]

*/

void fib(vpll vp){

    cout << vp[0].first + vp[0].second << endl;
}


int main(){


    ll n; cin >> n;


    base.push_back({1,1});
    base.push_back({1,0});

    vpll ans = power(base,n-2);

    fib(ans);


    return 0;
}

