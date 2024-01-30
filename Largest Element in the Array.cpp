//Largest Element in the Array

#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    int maxi=-1e9;
    for(int i=0;i<n;i++){
        if(arr[i]>=maxi){
            maxi=max(maxi,arr[i]);
        }
    }
    return maxi;
}
