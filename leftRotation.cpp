// previous solution(commented one) was not optimised, this is optimised
#include <bits/stdc++.h> 
using namespace std; 


// void leftRotatebyOne(long long int arr[], int n) 
// { 
//     long long int temp = arr[0];
//     int i; 
//     for (i = 0; i < n - 1; i++){ 
//         arr[i] = arr[i + 1]; 
//     }
//     arr[i] = temp; 
// } 

int main() 
{ 
    int n;
    int d;
    long long int arr[100000];
    long long int rotarr[100000];
    cin>>n>>d;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++){ //Instead of left rotation doing right rotation (n-d);
        int newIndex = (i + n - d)% n; // %n to ignore index out of bound error.
        rotarr[newIndex] = arr[i]; 
        
    }

    for (int i = 0; i < n; i++){
        cout << rotarr[i] << " "; 
    }    

    return 0; 
} 
