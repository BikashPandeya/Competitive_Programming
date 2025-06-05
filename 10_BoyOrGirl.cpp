
#include<bits/stdc++.h>
using namespace std;

int main(){
	string a , b;
	cin >> a;
	int i , j , count = 0, n= 0;
	
	for(i = 0; i< a.length() ; i++){
		count = 0;
		for(j = 0 ; j<=i; j++){
			if(a[i] == a[j]){ 
				count++;
			}
		}
		if(count == 1){
			n++;
		}
		
	}
	if(n%2 == 0){
		cout << "CHAT WITH HER!";
	}else{
		cout << "IGNORE HIM!";
	}
}
