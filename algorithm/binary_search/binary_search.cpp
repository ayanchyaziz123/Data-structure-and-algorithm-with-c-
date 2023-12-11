#include<bits/stdc++.h>
using namespace std;

// time complexity : 0(logn)
bool binary_search(int arr[], int len, int target){
    int left = 0;
    int right = len - 1;
    while(left<=right){
        int mid = (left + right) / 2;
        // if find my value in mid then return
        if(arr[mid] == target) return true;
        // if target value is greater than my mid value
        else if(arr[mid] < target) left = mid + 1;
        // if target value is not greater than mid value
        else right = mid - 1;    
    }
    return false;
}

int main(){
    // arr space 0(n)
    int arr[]  = {1, 2, 3, 4, 5, 6, 7};
    int len = sizeof(arr) / sizeof(int);
    cout << binary_search(arr, len, 3);
    return 0;
}