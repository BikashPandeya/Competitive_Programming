#include<bits/stdc++.h>
using namespace std;    

int main() {
    int n , k;
    cin >> n >> k;
    vector < pair < int , int >> v;
    for(int i = 0 ; i < n ; i++){
        int x ;
        cin >> x;
        v.push_back({x, i+1});
    }
    sort(v.begin(), v.end());
    int ans = 0;

    for(int i = 0 ; i < n ; i++){
        k = k-v[i].first;
        if(k >= 0){
            ans++;
        }else{
            break;
        }
    }
    cout << ans << "\n";
    for(int i = 0 ; i< ans ; i++){
        cout << v[i].second << " ";
    }
    
    return 0;
}