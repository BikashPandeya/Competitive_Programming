#include<bits/stdc++.h>
using namespace std;

int main(){
	int n , k , count=0 ,i;
	cin >> n >> k;
	int a[n];
	for(i = 0 ; i < n ;i++){
		cin >> a[i];
	}
	for(i = 0 ; i < n ;i++){
		if(a[i] > 0 && a[i] >= a[k-1]){
			count++;
		}
	}
	cout << count;
}
