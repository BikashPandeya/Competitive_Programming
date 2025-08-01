#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0 ; i < n ; i ++){
        int k , count = 1;
        string s;
        cin >> k >> s;
        for(int i=0;i<k;i++){
            if(s[i]-s[k-i-1] == 2 || s[i]-s[k-i-1] == -2){
               continue;
            }else if(s[i]-s[k-i-1] == 0){
                continue;
            }else{
                count = 0;
                break;
            }
        }
        if(count == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}