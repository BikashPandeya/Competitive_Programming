// https://codeforces.com/problemset/gymProblem/102267/B

#include <bits/stdc++.h>
using namespace std;

bool isPrime(long long int n){
    int c=0;
    for(long long int i =2;i*i<=n;i++){
        return false;
    }
    return true;
}


int main(){
    long long int n;
    cin >> n;
    if(isPrime(n-2)){
        cout << 2 << " " << n-2 << "\n";
    }else{
        cout << -1<< "\n";
    }
}