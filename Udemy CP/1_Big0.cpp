#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[5] = {2,4,3,7,5};
    int size = 5;
    int x = 3;
    for(int i = 0; i < size; i++) {
        if(arr[i] == x) {
            cout << "Element found at index: " << i << endl;
            break;
        }
    }

}