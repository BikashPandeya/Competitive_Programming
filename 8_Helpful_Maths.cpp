#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	cin >> a;
	for(char c : a){
		if(c != '+'){
			b += c;
		}
	}
	sort(b.begin() , b.end());
	for(int i = 0; i < b.length() ; i++){
		cout << b[i];
		if(i != b.length()-1){
			cout << '+';
		}
	}
}
