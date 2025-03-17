#include <bits/stdc++.h>

using namespace std;


void home(){
    freopen("nguyento.inp", "r", stdin);
    freopen("nguyento.out", "w", stdout);
}

long long n;
void nhap(){
    cin >> n;
}

void solve(){
    if(n % 2 == 0)cout << n/2;
    else {
        long long a = n;
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                a = i;
                break;
            }
        }
        cout << (n-a)/2 + 1;
    }
}

int main(){
    ios_base::sync_with_stdio();
    cin.tie(0); cout.tie(0); home();
    nhap(), solve();
    return 0;
}
