#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , i , count=0;
	cin >> n;
	string a[n];
	for(i=0;i<n;i++){
		cin >> a[i];
	}
	for(i=0;i<n;i++){
		for(int j=0;j<3;j++){
			if(a[i][j] == '-'){
				count--;
				break;
			}else if(a[i][j] == '+'){
				count++;
				break;
			}
		}
	}
	cout << count;
	
}
