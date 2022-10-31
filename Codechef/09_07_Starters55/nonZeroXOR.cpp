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


// CODE START

void solveITcaptain() {
    ll n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    // helps to check position of XOR
    // xorValue, vector of indixes with prefixXOR = xorValue
    map<ll, vector<ll>> index;

    ll curXor = 0, ans = 0, breakPoint = -1;
    index[0].pb(-1);

    for(ll i=0; i<n; i++) {
        curXor ^= a[i];

        // found equivalent xorValue
        if(lower_bound(index[curXor].begin(), index[curXor].end(), breakPoint) != index[curXor].end()) {
            curXor = 0;
            breakPoint = i;
            ans++;
        }
        
        index[curXor].push_back(i);
    }

    cout<<ans<<'\n';
}

// CODE END


int main() {
    system("cls");
    ios_base::sync_with_stdio(false);    cin.tie(nullptr);     cout.tie(nullptr);
    int t = 1;
    cin >> t;
    while (t--) {
        solveITcaptain();
    }
    return 0;
}