#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, count = 0, arr_num = 0;
    string cp, num;
    cin >> n;
    cp = to_string(n);
    int lucky_no[1000] = {};
    
    // Find lucky numbers (containing only 4 and 7)
    for(int i = 1; i <= 1000; i++) {
        num = to_string(i);
        bool is_lucky = true;
        
        for(char c : num) {
            if(c != '7' && c != '4') {
                is_lucky = false;
                break;
            }
        }
        
        if(is_lucky) {
            lucky_no[arr_num] = i;
            arr_num++;
        }
    }
    
    // Check if n is divisible by any lucky number
    bool divisible = false;
    for(int i = 0; i < arr_num; i++) {
        if(n % lucky_no[i] == 0) {
            divisible = true;
            break;
        }
    }
    
    // Check if n itself is a lucky number
    bool is_lucky = true;
    for(char c : cp) {
        if(c != '7' && c != '4') {
            is_lucky = false;
            break;
        }
    }
    
    if(divisible || is_lucky) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    
    return 0;
}