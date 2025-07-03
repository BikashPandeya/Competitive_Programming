#include<bits/stdc++.h>
using namespace std;
int main(){
	int count=0;
	string m;
	cin >> m;
	for (int i=0;i<m.length();i++){
		if(m[i]=='4' || m[i]=='7'){
			count++;
		}
	}
	if(count == 4 || count == 7){
		cout << "YES";
	}else{
		cout << "NO";
	}
	
	
}