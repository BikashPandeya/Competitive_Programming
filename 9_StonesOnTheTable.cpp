#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , i , count=0;
	string s;
	cin >> n >> s;
	for(i = 1 ; i< s.length() ; i++){
		if(s[i] == s[i-1]){
			count++;
		}
	}
	cout << count ;
}
