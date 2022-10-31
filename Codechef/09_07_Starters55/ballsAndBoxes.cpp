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
    int n, k;
    cin>>n>>k;

    int sum = k*(k+1)/2;
    if(sum >= n) {
        cout<<"Yes\n";
    } else {
        cout<<"No\n";
    }
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