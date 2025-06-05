#include<bits/stdc++.h>
using namespace std;

int main(){
	string a,b;
	int count=0;
	cin >> a >> b;
		for(int i=0;i < a.length();i++){
			if (tolower(a[i]) < tolower(b[i])) {
            count = -1;
            break;
        } else if (tolower(a[i]) > tolower(b[i])) {
            count = 1;
            break;
        }
	}
	cout << count << endl;
}
