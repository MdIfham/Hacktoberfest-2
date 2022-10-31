#include<bits/stdc++.h> 
using namespace std;

#define ll long long
#define lli long long int
#define ld long double
#define pb push_back

ll mod = 1e9 + 7;

ll gcd(ll firstNumber, ll secondNumber) {
    if (secondNumber == 0) return firstNumber;
    else return gcd(secondNumber, firstNumber % secondNumber);
}

// __builtin_popcount = int
// __builtin_popcountl = long int
// __builtin_popcountll = long long


// CODE START

void solveITcaptain() {
    ll n, k;
    cin>>n>>k;
    vector<ll> type2(k+1, 0);
    for(ll i=1; i<=k; i++) {
        cin>>type2[i];
    }

    ll totBalls = n - k; // no of type1 operations
    ll ballsAtEnd = 0;

    ll i;
    for(i=1; i<=k; i++) {
        ballsAtEnd += type2[i] - 1 - type2[i-1];
        ballsAtEnd /= 2;
    }

    ballsAtEnd += n - type2[k];

    ll dropped = totBalls - __builtin_popcountll(ballsAtEnd);
    cout<<dropped<<'\n';

}

// CODE END


int main() {
    // system("cls");
    ios_base::sync_with_stdio(false);    cin.tie(nullptr);     cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solveITcaptain();
    }
    return 0;
}


