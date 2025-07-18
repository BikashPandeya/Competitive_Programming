#include<bits/stdc++.h>
using namespace std;

#define FOR(i, a, b) for (int i = a; i < b; i++)
typedef int ii;


void traversal(int arr[] , int s){
    FOR(i , 0 , s){
        cout <<arr[i] << " ";
    }
}

int sum_arr (int arr[] , int s){
    int sum = 0;
    FOR(i , 0 , s){
        sum += arr[i];
    }
    return sum;
}

void search(int arr[], int s , int x){
    FOR(i, 0, s) {
        if (arr[i] == x) {
            cout << "Found at index: " << i << endl;
            return; // Exit after finding the first occurrence
        }
    }
}

void swap(int &x , int &y){
    int temp = x;
    x = y;
    y=temp; 
}

void reverse(int arr[] , int s){
    int left = 0;
    int right = s-1;
    while(left <right ){
        swap(arr[left] , arr[right]);
        left++ ;
        right--;
    }
   
}

void recursive_reverse(int arr[], int left, int right) {
    if (left >= right) return; // Base case
    int temp = arr[left];
    arr[left] = arr[right];
    arr[right] = temp;
    recursive_reverse(arr, left + 1, right - 1); // Recursive call
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int arr[] = {1 , 2 , 3 , 4 , 5 , 6};
    int size = sizeof(arr) / sizeof(arr[0]);// Calculate the number of elements in the array as sizeof(arr) gives the total size in bytes and sizeof(arr[0]) gives the size of one element.
    


    // TRAVERSAL
    // traversal(arr , size);
    // cout  << sum_arr(arr , size);

    search(arr, size , 3);

    // reverse(arr , size);
    // traversal(arr, size);

    cout << "\n\n" << "Reverse by Recursion" << "\n\n";
    recursive_reverse(arr, 0 , size-1);
    traversal(arr, size);

    // for(int i : arr){
    //     cout << i << " ";
    // }
    return 0;
}