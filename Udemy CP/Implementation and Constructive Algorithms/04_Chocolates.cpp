#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n , count = 0 , max=0;
    cin >> n;
    long long int types[n] ;
    for(int i=0; i<n; i++){
        cin >> types[i];
        if(i > 0 && types[i] >= types[i-1]){
            max = types[i]+1;
        }else{
            max = types[i]+1;
        }
    }
    for(int i=n-1; i>=0; i--){
        if(types[i] < max){
            max = types[i];
        }
       else if(types[i] >= max){
        types[i] = max-1;
        if(types[i] < 0){
            types[i] = 0;
        }
        max = types[i];
       }
    //    cout << types[i] << " ";
       count += types[i];
    }
    cout << count ;

    return 0;
}