#include<bits/stdc++.h>
using namespace std;    

int main(){
    string n , s = "";
    cin >> n;
    for(int i = 0; i < n.size(); i++){
        if(n[i] >= '5'){
            if(i==0 && n[i] == '9') {
                s.push_back('9');
                continue;
            } 
            s.push_back('9' - n[i] + '0');
        }else {
            s.push_back(n[i]);
        }
    }
    cout << s;
    return 0;
}