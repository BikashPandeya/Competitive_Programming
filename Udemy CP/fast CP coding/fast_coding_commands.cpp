#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define FOR(i, a, b) for (int i = a; i < b; i++)

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // ll a=54124586452143;
    // ll b=54124586452143;
    // cout <<  a*b << "\n";


    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif
    // for(int i = 0; i < 5; i++) {
    //     cout << i<< endl;
    // }  
    FOR(I , 0 , 5){
        cout << I << endl;
    }
    cout << endl << endl ;

    int a, b;
    cin >> a >> b;
    cout << a+b << endl ;

    return 0;
}