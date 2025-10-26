#include<bits/stdc++.h>
using namespace std;

long long findMA(long long a, long long b){
    if(b==0) return 1;
    if(b==1) return a;
    long long c = findMA(a , b/2);

    if(b%2==0)
        return c*c;
    else
        return a*c*c;

}

int main(){
    long long n , m;
    
    cin >> n >> m;

    if(n > 30){
        cout << m;
    }else{
            long long result = findMA(2 , n);
        cout << m%result;
    }
    
}