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
    long long result = findMA(n , m);
    if(m < result){
        cout << m;
    }else{
        cout << m%result;
    }
    
}