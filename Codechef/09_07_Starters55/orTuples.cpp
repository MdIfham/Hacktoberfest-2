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
    ll p, q, r;
    cin>>p>>q>>r;

    ll ans = 1;

    // METHOD 1 START

    // for(int i=0; i<30; i++) {
    //     int count = 0;
    //     count += ((p & (1<<i)) > 0);
    //     count += ((q & (1<<i)) > 0);
    //     count += ((r & (1<<i)) > 0);

    //     if(count == 0 || count == 2) {
    //         ans *= 1;
    //     } else if(count == 1) {
    //         ans = 0;
    //         break;
    //     } else if(count == 3) {
    //         ans *= 4;
    //     }
    // }

    // METHOD 1 END

    
    // METHOD 2 START
    
    vector<int> count(20, 0);
    for(int i=0; i<20; i++) {
        count[i] += p%2 + q%2 + r%2;
        p /= 2;
        q /= 2;
        r /= 2;
    }

    for(int i=0; i<20; i++) {
        if(count[i] == 0 || count[i] == 2) {
            ans *= 1;
        } else if(count[i] == 1) {
            ans = 0;
            break;
        } else if(count[i] == 3) {
            ans *= 4;
        }
    }

    // METHOD 2 END

    cout<<ans<<'\n';
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